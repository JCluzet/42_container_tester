#  |  |  ___ \    \  |         |
#  |  |     ) |  |\/ |   _  |  |  /   _ 
# ___ __|  __/   |   |  (   |    <    __/ 
#    _|  _____| _|  _| \__,_| _|\_\ \___|
#                              by jcluzet

CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
WHITE        := \033[1;37m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f


all:	
		@   printf "        ${WHITE}[?]${YELLOW} HELP${CLR_RMV}\n"
		@   printf "        ${WHITE} |                          \n"
		@   printf "        ${WHITE} |                          \n"
		@   printf "        ${WHITE}   Launch tester with:  ${CLR_RMV} bash launch.sh\n"
		@   printf "        ${WHITE} |                          \n"
		@   printf "        ${WHITE} OPTIONS                    \n"
		@   printf "        ${WHITE} |                          \n"
		@   printf "        ${WHITE} 1 ${CLR_RMV} "--verbose"${WHITE} \n"
		@   printf "        ${WHITE} |  With verbose, all logs will be write.\n"
		@   printf "        ${WHITE} |  Find the logs in logs_student/\n"
		@   printf "        ${WHITE} |                          \n"
		@   printf "        ${WHITE} 2 ${CLR_RMV} Testing specific main${WHITE} \n"
		@   printf "        ${WHITE} |  With this option, you can test a specific main.\n"
		@   printf "        ${WHITE} |  Usage : bash launch.sh main/vec_modifiers/clear.cpp\n"
		@   printf "        ${WHITE} |                          \n"
		@   printf "        ${WHITE} 3 ${CLR_RMV} Testing specific folder of main${WHITE} \n"
		@   printf "        ${WHITE} |  With this option, you can test a specific folder of main.\n"
		@   printf "        ${WHITE} |  Usage : bash launch.sh main/vec_modifiers/\n"
		@   printf "        ${WHITE} |                          \n"
		@   printf "        ${WHITE} |                          \n"
		@   printf "        ${WHITE} INFO                       \n"
		@   printf "        ${WHITE} |                          \n"
		@   printf "        ${WHITE} | - ${WHITE} You can find all different main in folder main/\n"
		@   printf "        ${WHITE} | - ${WHITE} At any time you can add your own test.\n"
		@   printf "        ${WHITE} | - ${WHITE}  -> Start by create a new folder or any files\n"
		@   printf "        ${WHITE} | - ${WHITE}  -> Then, create a new main.cpp\n"
		@   printf "        ${WHITE} | - ${WHITE} ⚠️ You must include \"../main.hpp\"\n"


re:			fclean all

.PHONY:		all clean fclean re


