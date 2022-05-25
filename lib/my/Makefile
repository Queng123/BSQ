##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC	=	fonctions/my_putstr.c				\
		fonctions/my_putchar.c				\
		fonctions/my_compute_power_rec.c	\
		fonctions/my_compute_square_root.c	\
		fonctions/my_find_prime_sup.c		\
		fonctions/my_getnbr.c				\
		fonctions/my_isneg.c				\
		fonctions/my_is_prime.c				\
		fonctions/my_put_nbr.c				\
		fonctions/my_revstr.c				\
		fonctions/my_showmem.c				\
		fonctions/my_showstr.c				\
		fonctions/my_sort_int_array.c		\
		fonctions/my_strcapitalize.c		\
		fonctions/my_strcat.c				\
		fonctions/my_strcmp.c				\
		fonctions/my_strcpy.c				\
		fonctions/my_str_isalpha.c			\
		fonctions/my_str_islower.c			\
		fonctions/my_str_isnum.c			\
		fonctions/my_str_isprintable.c		\
		fonctions/my_str_isupper.c			\
		fonctions/my_strlen.c				\
		fonctions/my_strlowcase.c			\
		fonctions/my_strncat.c				\
		fonctions/my_strncmp.c				\
		fonctions/my_strncpy.c				\
		fonctions/my_strstr.c				\
		fonctions/my_strupcase.c			\
		fonctions/my_swap.c					\
		fonctions/my_strtol.c				\
		fonctions/my_itoa.c					\
		fonctions/print_fonctions.c			\
		fonctions/print_hexa.c				\
		fonctions/my_binary_conversion.c	\
		fonctions/my_print_adress.c			\
		fonctions/my_printf.c				\
		fonctions/my_put_bigstr.c			\
		fonctions/my_put_nbr_unsigned.c		\
		fonctions/my_strdup.c				\
		fonctions/my_calloc.c 				\
		fonctions/my_memset.c				\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)
		mv $(NAME) ../../
		cp -r include/ ../../

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
		rm -rf ../../libmy.a

re:	fclean all

.PHONY: fclean clean re all
