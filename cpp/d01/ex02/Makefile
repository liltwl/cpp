
NAME = brain

CFLAGS = -Wall -Wextra -Werror

CC = clang++

FIL_ = main.cpp


OBJ = $(FIL:.c=.o)

all: $(NAME)

$(NAME): $(FIL)
	$(CC) $(CFLAGS) $(FIL_) -o $(NAME)

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

norm:
	norminette $(FIL) $(addprefix ./inc/, $(HEADER)) $(FIL_B)

leaks:
	leaks $(NAME) > leak