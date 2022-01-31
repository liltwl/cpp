
NAME = fixed

CFLAGS = -O3 -Wall -Wextra -Werror

CC = c++

FIL_ = Fixed.cpp


OBJ = $(FIL:.c=.o)

FIL = $(addprefix ./, $(FIL_))

all: $(NAME)

$(NAME): $(FIL)
	$(CC) $(CFLAGS) $(FIL) -o $(NAME)


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
