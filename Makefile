##
## Makefile for make in /home/alexandre/Documents/tek-1/PSU_/
##
## Made by John Doe
## Login   <login_x@epitech.eu>
##
## Started on  Wed Nov  9 15:12:36 2016 John Doe
## Last update Tue Oct 17 11:03:00 2017 Alexandre Chamard-bois
##

CC		=	gcc

CFLAGS		=	-W -Wall -Wextra -Werror
CFLAGS		+=	-I./include

SRC		=	src/print.c			\
			src/double_tab_sort.c		\
			src/cocktail.c			\
			src/merge.c			\

OBJ		=	$(SRC:.c=.o)

MAKE_LIB	=	make -C ./lib/my/

LIB		=	-L./lib/my -lmy

NAME		=	push_swap

all:			$(NAME)

$(NAME)		:	$(OBJ)
			$(MAKE_LIB)
			$(CC) -o $(NAME) $(OBJ) $(LIB) $(CFLAGS)

clean		:
			rm -rf $(OBJ)
			$(MAKE_LIB) clean

fclean		: 	clean
			rm -rf $(NAME)
			$(MAKE_LIB) fclean

re		:	fclean all
