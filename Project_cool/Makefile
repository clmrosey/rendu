##
## Makefile for Makefile in /home/rosey_c/rendu/Project_cool
## 
## Made by clément
## Login   <rosey_c@epitech.net>
## 
## Started on  Mon Jan 20 13:54:13 2014 clément
## Last update Mon Jan 20 15:06:15 2014 clément
##

SRC	= main.c
	  show_stat.c
	  set_class.c

NAME	= MyRPG

CC	= cc

ER	= -g3

OBJ	= $(SRC:.c=.o)

LIB	= -L my -lmy

FLAG	= -W -Werror -Wall -Wextra -ansi

MAKE	= make -C my

RM	= rm -f

$(NAME):	$(OBJ)
	$(MAKE)
	$(CC) $(FLAG) -o $(NAME) $(OBJ) $(LIB)

all:		$(NAME)

clean:
	$(RM) $(OBJ)
	$(MAKE) clean

fclean:		clean
	$(RM) $(NAME)
	$(MAKE) fclean

re:	fclean all
