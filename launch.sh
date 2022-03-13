# define colors
RED='\033[0;31m'
GREEN='\033[0;32m'
RESET='\033[0m'
YELLOW='\033[0;33m'
BOLD='\033[1m'
RESETBOLD='\033[21m'
PURPLE='\033[0;35m'
WHITE='\033[1;37m'

clear

header()
{
printf "$WHITE
   ___            _        _                 _            _            
  / __\___  _ __ | |_ __ _(_)_ __   ___ _ __| |_ ___  ___| |_ ___ _ __ 
 / /  / _ \| '_ \| __/ _\` | | '_ \ / _ \ '__| __/ _ \/ __| __/ _ \ '__|
/ /__| (_) | | | | || (_| | | | | |  __/ |  | ||  __/\__ \ ||  __/ |   
\____/\___/|_| |_|\__\__,_|_|_| |_|\___|_|___\__\___||___/\__\___|_|   
                                        |_____|          by Grademe.fr$RESET\n\n"
}

rm -rf logs_student > /dev/null 2>&1

test_byfolder() {
    for folder in main/$folderact/; do
#stock folder in foldername variable in MAJ mode (upper case) and remove the last / to get the name of the folder and remove the first 5 characteres
foldername=$(echo $folder | tr '[:lower:]' '[:upper:]' | sed 's/.$//' | sed 's/^.\{5\}//')
if [ $i -ne 0 ]; then
    printf "\n --> $PURPLE$BOLD$foldername\n"
else
    printf " --> $PURPLE$BOLD$foldername\n"
fi
for actual_test in $(find $folder -name "*.cpp" -type f); do
    testing
    i=$(($i + 1))
done
done
}

switch_tostud() {
    cat main/main.hpp | sed 's/using namespace std/using namespace ft/g' | sed 's/namespace std/namespace ft/g' >maintmp.hpp
    rm main/main.hpp
    mv maintmp.hpp main/main.hpp
}

switch_toboc() {
    cat main/main.hpp | sed 's/using namespace ft/using namespace std/g' | sed 's/namespace ft/namespace std/g' >maintmp.hpp
    rm main/main.hpp
    mv maintmp.hpp main/main.hpp
}

testing() {
    switch_tostud
    rm a.out >/dev/null 2>&1
    actual=$(echo $actual_test | sed 's/.*\///' | sed 's/\.cpp//')
    #remove the 5 first characters of the string and adding .log at the end
    logs=$(echo $actual_test | sed 's/^.\{5\}//' | sed 's/\.cpp//')
    logs=logs_student/$logs.log
    # replace every // by /
    logs=$(echo $logs | sed 's/\/\//\//g')
    #echo ">>$logs<<" 
    actualnb=$(echo $actual | wc -c)
    # printf ">>$actual<<\n"
    maxnb=22
    getspace=$(($maxnb-$actualnb))
    clang++ -Wall -Wextra -Werror $actual_test >.dev 2>&1
    # output maxnb - maxnb space characters
    if [ "$?" == "0" ]; then
        printf "$WHITE$BOLD$actual$RESET"
        while [ $getspace -gt 0 ]; do
            getspace=$(($getspace - 1))
            printf " "
        done
        printf "$GREEN        OK      $RESET"
        nul=0
    else
        printf "$RED$BOLD$actual$RESET"
        while [ $getspace -gt 0 ]; do
            getspace=$(($getspace - 1))
            printf " "
        done
        mkdir -p $logs >/dev/null 2>&1
        rm -r $logs
        cat .dev >$logs
        printf "$RED        KO      $RESET"
        nul=1
    fi

    if [ $nul -eq 0 ]; then
        # stock actual time with seconds
        outputstud=$(./a.out )
        stud_time="$(time ( ./a.out ) 2>&1 1>/dev/null)"
        #sleep 100
        switch_toboc
        clang++ -Wall -Wextra -Werror $actual_test >.dev 2>&1
        outputboc=$(./a.out)
        boc_time="$(time ( ./a.out ) 2>&1 1>/dev/null )"
        diffoutput=$(diff <(echo "$outputstud") <(echo "$outputboc"))
    else
        diffoutput="Compilation KO"
    fi
    # remove all after first newline
    stud_t=$(echo $stud_time | sed 's/.\{5\}//' | cut -d " " -f 1 | sed 's/.\{2\}//' | sed 's/.$//')
    boc_t=$(echo $boc_time | sed 's/.\{5\}//' | cut -d " " -f 1 | sed 's/.\{2\}//' | sed 's/.$//')
    if [ -z "$diffoutput" ] && [ $nul -eq 0 ]; then
        printf "| $GREEN   OK    $RESET|"
        # if stud_t - boc_t < 0.3 then OK else KO
        good1="$stud_t $boc_t"
        good=$(echo "$good1" | awk '{if ($1-$2 < 0.06) print "OK"; else print "KO"}')
        if [ "$good" == "OK" ]; then
            printf "  $GREEN$boc_t"
            printf "s$RESET  | $GREEN$stud_t"
            printf "s$RESET |"
            goodtest=$((goodtest+1))
        else
            printf "  $GREEN$boc_t"
            printf "s$RESET  | $RED$stud_t"
            printf "s$RESET |"
        fi
    else
    if [ "$diffoutput" != "Compilation KO" ]; then
        mkdir -p $logs >/dev/null 2>&1
        rm -r $logs
        echo "YOUR OUTPUT:" >$logs
        echo "$outputstud" >>$logs
        echo "BOC OUTPUT:" >>$logs
        echo "$outputboc" >>$logs
        echo "DIFF:" >>$logs
        echo $diffoutput >> $logs
    fi
        printf "| $RED   KO  $RESET-> $RED check logs_student$RESET|"
    fi
    printf "\n"
}

echo "----------- FT_CONTAINERS TESTER SETUP ----------------"

# search in current directory and all subdirectories for the file "stack.hpp" or "Stack.hpp"
# if found, then the path is stored in the variable "path_stack"
path_stack=$(find ../. -name "stack.hpp" -o -name "Stack.hpp" | head -n 1)
if [ "$path_stack" == "" ]; then
    printf "$RED \nCan't find any files named 'stack.hpp' or 'Stack.hpp' in the current directory or in subdirectories.$RESET\n\nExpected Tree:\n\n. [your_project]\n└── container_test\n    └── launch.sh \n\nEnter your path to the file 'stack.hpp' or 'Stack.hpp' : "
    read path_stack
else
    printf "We found the file : $GREEN $path_stack$RESET for Stack\n"
    # printf "Do you want to use this file ? (y/n) : "
    # read answer
    answer="y"
    if [ "$answer" == "y" ]; then
        printf "Using$GREEN $path_stack$RESET for Stack\n"
    else
        printf "Enter your path to the file 'stack.hpp' or 'Stack.hpp' : "
        read path_stack
    fi
fi
# cat main/main.hpp | sed '21d' > maintmp.hpp
# echo "#include \"../$path_stack\"" >> maintmp.hpp
# rm main/main.hpp
# mv maintmp.hpp main/main.hpp

printf "\n\n\n\n"
path_vector=$(find ../. -name "vector.hpp" -o -name "Vector.hpp" | head -n 1)
if [ "$path_stack" == "" ]; then
    printf "$RED \nCan't find any files named 'vector.hpp' or 'Vector.hpp' in the current directory or in subdirectories.$RESET\n\nExpected Tree:\n\n. [your_project]\n└── container_test\n    └── launch.sh \n\nEnter your path to the file 'stack.hpp' or 'Stack.hpp' : "
    read path_vector
else
    printf "We found the file : $GREEN $path_vector$RESET for Vector\n"
    # printf "Do you want to use this file ? (y/n) : "
    # read answer
    answer="y"
    if [ "$answer" == "y" ]; then
        printf "Using$GREEN $path_vector$RESET for Vector\n"
    else
        printf "Enter your path to the file 'vector.hpp' or 'Vector.hpp' : "
        read path_vector
    fi
fi
clear
# rm main/main.hpp
# mv maintmp.hpp main/main.hpp

# remove all lines after the line 22 in main/main.hpp
cat main/main.hpp | sed '22,100d' >maintmp.hpp # if adding line in .hpp then add +1 to 22
rm main/main.hpp
mv maintmp.hpp main/main.hpp

echo "#include \"../$path_stack\"" >>main/main.hpp
echo "#include \"../$path_vector\"" >>main/main.hpp
echo "#include \"print_vec.hpp\"" >>main/main.hpp

printf "$RESET\n"
header
echo -n "-------------------------------"
printf "$WHITE VECTOR $RESET-------------------------------\n"
printf "\n                       $WHITE COMPILATION $RESET | $WHITE OUTPUT $RESET |  $WHITE STD  $RESET  | $WHITE  FT$RESET\n"

i=0
goodtest=0
# for each folder in the directory main/
# if there is a argument then only test the file name given in argument
if [ $1 ]; then
    # if argument is "stack" or "STACK" then only test the stack
    if [ "$1" == "stack" ]
    then
        folderact="stack_*"
        test_byfolder
    elif [ "$1" == "vector" ]
    then
        folderact="vec_*"
        test_byfolder
    elif [ "$1" == "map" ]
    then
        folderact="map_*"
        test_byfolder
    # elif $1 is a folder name
    elif [ "$1" == "main" ] || [ "$1" == "main/" ]
    then
        folderact="*"
        test_byfolder
    elif [ -d "$1" ]
    then
        folderact=$(echo $1 | sed 's/^.\{5\}//')
        test_byfolder
    elif [ -f "$1" ]
    then
        actual_test=$1
        testing
        i=$(($i + 1))
    else
        printf "$RED \nThe argument $RESET$1$RED is not a folder name or a file name.\n$RESET\nExemple : ./launch.sh stack\n          ./launch.sh vector\n          ./launch.sh map\n          ./launch.sh main/vector_capacity\n          ./launch.sh main/vector_capacity/vec_push_back.c\n          ./launch.sh\n"
        exit 1
    fi
else
    folderact="*"
    test_byfolder
fi
rm .dev > /dev/null 2>&1
rm a.out > /dev/null 2>&1

if [ $goodtest -eq $i ]; then
    printf "\n\n $WHITE RESULT : $GREEN$goodtest$RESET/$WHITE$i 🥳 $RESET\n\n"
else
    printf "\n\n $WHITE RESULT : $RED$goodtest$RESET/$WHITE$i 😣 $RESET\n"
    printf "$WHITE           └──> Find logs in the folder$BOLD logs_student$RESET$WHITE$RESET\n\n"
fi


# actual_test="main/vector_main/copy_constructor.cpp"
# testing