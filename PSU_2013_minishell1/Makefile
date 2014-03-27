##
## Makefile for Makefile in /home/rosey_c/rendu/PSU_2013_minishell1
##
## Made by rosey
## Login   <rosey_c@epitech.net>
##
## Started on  Wed Dec 11 10:16:44 2013 rosey
## Last update Fri Dec 20 15:37:17 2013 clément
##

SRC	= minishell1.c

NAME	= mysh

CC	= cc

OBJ	= $(SRC:.c=.o)

LIB	= -L my -lmy

MAKE	= make -C my 

RM	= rm -f

$(NAME):	$(OBJ)
	$(MAKE)
	$(CC) -o $(NAME) $(OBJ) $(LIB) 

all:		$(NAME)

clean:
	$(RM) $(OBJ)
	$(MAKE) clean

fclean:		clean
	$(RM)	$(NAME) 
	$(MAKE) fclean

re:	fclean all
