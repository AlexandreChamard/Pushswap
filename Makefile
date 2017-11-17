##
## Makefile for make in /home/alexandre/Documents/tek-1/PSU_/
##
## Made by John Doe
## Login   <login_x@epitech.eu>
##
## Started on  Wed Nov  9 15:12:36 2016 John Doe
## Last update Fri Nov 17 14:18:34 2017 alexandre Chamard-bois
##

CC		=	gcc

CFLAGS		=	-W -Wall -Wextra -Werror
CFLAGS		+=	-I./include

SRC		=	src/double_tab_sort.c		\
			src/cocktail.c			\
			src/merge.c			\
			src/my_getnbr.c			\

OBJ		=	$(SRC:.c=.o)

NAME		=	push_swap

all:			$(NAME)

$(NAME)		:	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean		:
			rm -rf $(OBJ)

fclean		: 	clean
			rm -rf $(NAME)

re		:	fclean all
