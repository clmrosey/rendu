##
## Makefile for Makefile in /home/rosey_c/rendu
## 
## Made by clément
## Login   <rosey_c@epitech.net>
## 
## Started on  Mon Dec 16 10:45:54 2013 clément
## Last update Mon Dec 16 10:51:02 2013 clément
##

SRC	= 103architecte.c

NAME	= 103architecte

OBJ	= $(SRC:.c=.o)

CC	= cc -lm

RM	= rm -f

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM)	$(NAME)

re:	fclean all
