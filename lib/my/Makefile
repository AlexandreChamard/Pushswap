##
## Makefile for make in /home/alexandre/Documents/tek-1/PSU_/
##
## Made by John Doe
## Login   <login_x@epitech.eu>
##
## Started on  Wed Nov  9 15:12:36 2016 John Doe
## Last update Tue Oct 17 11:06:25 2017 Alexandre Chamard-bois
##

CFLAGS		=	-W -Wall -Wextra -Werror
CFLAGS		+=	-I.

SRC		=	my_printf.c		\
			my_putchar.c		\
			my_putstr.c		\
			my_put_nbr.c		\
			my_put_nbr_base.c	\
			my_strlen.c		\
			call_func_part1.c	\
			call_func_part2.c	\
			call_func_part3.c	\
			my_getnbr.c		\
			my_strcpy.c

OBJ		=	$(SRC:.c=.o)

NAME		=	libmy.a

all		:	$(OBJ)
			ar rc $(NAME) $(OBJ)

clean		:
			rm -f $(OBJ)

fclean		: 	clean
			rm -f $(NAME)

re		:	fclean all
