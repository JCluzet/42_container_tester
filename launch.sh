# define colors
RED='\033[0;31m'
GREEN='\033[0;32m'
RESET='\033[0m'

clear

header()
{
printf "
   ___            _        _                 _            _            
  / __\___  _ __ | |_ __ _(_)_ __   ___ _ __| |_ ___  ___| |_ ___ _ __ 
 / /  / _ \| '_ \| __/ _\` | | '_ \ / _ \ '__| __/ _ \/ __| __/ _ \ '__|
/ /__| (_) | | | | || (_| | | | | |  __/ |  | ||  __/\__ \ ||  __/ |   
\____/\___/|_| |_|\__\__,_|_|_| |_|\___|_|___\__\___||___/\__\___|_|   
                                        |_____|          by Grademe.fr\n\n"
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
    actualnb=$(echo $actual | wc -c)
    # printf ">>$actual<<\n"
    maxnb=22
    getspace=$(($maxnb-$actualnb))
    clang++ -Wall -Wextra -Werror $actual_test >.dev 2>&1
    # output maxnb - maxnb space characters
    if [ "$?" == "0" ]; then
        printf "$actual"
        while [ $getspace -gt 0 ]; do
            getspace=$(($getspace - 1))
            printf " "
        done
        printf "$GREEN        OK      $RESET"
        nul=0
    else
        printf "$actual"
        while [ $getspace -gt 0 ]; do
            getspace=$(($getspace - 1))
            printf " "
        done
        cat .dev >logs_student/vector_main/vector_constructor.log
        printf "$RED        KO      $RESET"
        nul=1
    fi

    if [ $nul -eq 0 ]; then
        # stock actual time with seconds
        outputstud=$(./a.out)
        stud_time="$(time ( ./a.out ) 2>&1 1>/dev/null )"
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
        printf "| $RED   KO    $RESET|"
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

printf "$RESET\n"
header
echo -n "-------------------------------"
printf "$GREEN VECTOR $RESET-------------------------------\n"
printf "\n                        COMPILATION  |  OUTPUT  |   STD    |   FT\n"

i=0
goodtest=0
for actual_test in $(find main/vector_main -name "*.cpp" -type f); do
    testing
    i=$(($i + 1))
done

if [ $goodtest -eq $i ]; then
    printf "\n\n  RESULT : $GREEN$goodtest$RESET/$i 🥳 $RESET\n\n"
else
    printf "\n\n  RESULT : $RED$goodtest$RESET/$i 😣 $RESET\n\n"
    printf "Find logs in the folder 'logs_student'\n"
fi


# actual_test="main/vector_main/copy_constructor.cpp"
# testing