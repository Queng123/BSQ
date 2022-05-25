##
## EPITECH PROJECT, 2021
## test
## File description:
## test
##

SRC			=	src/fs_open_file.c					\
				src/load_2d_arr_from_file.c			\
				src/mem_alloc_2d_array.c			\
				src/is_square_of_size.c				\
				src/find_biggest_square.c			\
				src/bsq.c							\
				src/tab_char_to_int.c 				\
				src/get_width.c						\
				src/fs_get_number_from_first_line.c	\
				src/temporary_tab.c					\
				src/error_handling.c 				\

TEST_FONC	=	tests/test_my_printf.c		\

MAIN		=	src/main.c

OBJ_SRC		=	$(SRC:.c=.o)

OBJ_TEST	+=	$(OBJ_SRC)
OBJ_TEST	+=	$(TEST_FONC:.c=.o)

TEST_BINARY	=	unit_tests

FLAGS		=	-Wall -Wextra	-I./include/ -g

TESTS_FLAGS	=	--coverage -lcriterion -I./include

LIB_FLAGS	=	-L./ -lmy

NAME		=	bsq

all:		$(NAME)

$(NAME):
			mkdir -p ./include/
			cp -r ./lib/my/include/. ./include/.
			make -C lib/my/
			gcc $(SRC) $(MAIN) $(FLAGS) $(LIB_FLAGS) -o $(NAME)

tests_run:
		gcc $(SRC) $(TEST_FONC) $(TESTS_FLAGS) $(LIB_FLAGS) -o $(TEST_BINARY)
		./$(TEST_BINARY)
		gcovr --exclude tests --branches
		gcovr --exclude tests
		mv -f *.gc* tests

clean:
			rm -f $(OBJ_MAIN)
			rm -f $(OBJ_SRC)
			rm -f $(OBJ_TEST)
			make -C lib/my/ clean

fclean:		clean
			rm -rf ./include
			rm -f $(NAME)
			rm -f $(TEST_BINARY)
			rm -f ./include/my.h
			rm -f ./lib/libmy.a
			rm -f *.gc*
			make -C lib/my/ fclean

re:	fclean all

.PHONY:		fclean clean re all
