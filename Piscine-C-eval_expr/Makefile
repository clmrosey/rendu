ren##
## Makefile for Makefile in /home/rosey_c/rendu/Piscine-C-eval_expr
## 
## Made by rosey
## Login   <rosey_c@epitech.net>
## 
## Started on  Thu Oct 31 09:45:02 2013 rosey
## Last update Thu Oct 31 09:49:58 2013 rosey
##

SRC=	eval_expr.c

NAME=	eval_expr

OBJ=	$(SRC:.c=.o)

LIB=	 -lmy -L /home/rosey_c/rendu/Piscine-C-lib/my/

all:	$(NAME)

$(NAME):
		cc -o $(NAME) $(SRC)

cleam:
		rm -f $(OBJ) *~

fclean:		clean
		rm -f $(NAME)

re:		fclean all
