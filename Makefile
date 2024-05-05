##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

# Remember, if you ever find the correct password, come see us at the HUB :)

DIR =	src/

SRC =	$(DIR)create_list.c	\
		$(DIR)init_list.c	\
		$(DIR)main.c		\
		$(DIR)my_getnbr.c	\
		$(DIR)sa_sb.c		\
		$(DIR)pa_pb.c		\
		$(DIR)ra_rb_rr.c	\
		$(DIR)rra_rrb_rrr.c	\
		$(DIR)is_list_sorted.c\
		$(DIR)find_min.c	\
		$(DIR)sort_alg.c	\
		$(DIR)my_putchar.c	\
		$(DIR)my_putstr.c

CPPFLAGS	=	-I./include

CFLAGS		=	-Wall -Wextra

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

TO_TEST	=	tests/unit_tests.c	\
		$(SRC)

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(CFLAGS) -g

tests_run: unit_tests
	./unit_tests

unit_tests: fclean
	gcc -o unit_tests $(TO_TEST) $(CPPFLAGS)	\
	--coverage -lcriterion

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f '#*#'

fclean: clean
	rm -f libmy.a

totalclean: fclean
	rm -f unit_tests*

re: fclean all

.PHONY: all libmy.a tests_run unit_tests clean fclean totalclean re
