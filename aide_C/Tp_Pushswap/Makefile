##
## Makefile for Makefile in /home/rosey_c/rendu/aide_C/Tp_Pushswap
## 
## Made by clément
## Login   <rosey_c@epitech.net>
## 
## Started on  Thu Dec 19 14:31:41 2013 clément
## Last update Thu Dec 19 14:47:20 2013 clément
##

SRC	= sort_input_word.c

NAME	= sort_input_word

CC	= cc

OBJ	= $(SRC:.c=.o)

RM	= rm -f

$(NAME):	$(OBJ)
	$(cc) -o $(NAME) $(OBJ)

all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM)	$(NAME)

re:	fclean all
