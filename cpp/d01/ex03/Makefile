
NAME = weapon

CFLAGS = -Wall -Wextra -Werror

CC = c++

FIL_ = main.cpp	HumanA.cpp Weapon.cpp HumanB.cpp


OBJ = $(FIL:.c=.o)

all: $(NAME)

$(NAME): $(FIL)
	$(CC) $(FIL_) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all

me:
	@echo $(NAME)
	@echo "#    #  ####   ####  #####   #    #  ####   ####  #####  "
	@echo "##   # #    # #    # #    #  ##   # #    # #    # #    # "
	@echo "# #  # #    # #    # #####   # #  # #    # #    # #####  "
	@echo "#  # # #    # #    # #    #  #  # # #    # #    # #    # "
	@echo "#   ## #    # #    # #    #  #   ## #    # #    # #    # "
	@echo "#    #  ####   ####  #####   #    #  ####   ####  #####  "
