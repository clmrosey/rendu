##
## Makefile for Makefile in /home/rosey_c/rendu/Allum1
##
## Made by rosey
## Login   <rosey_c@epitech.net>
##
## Started on  Wed Dec 11 10:16:44 2013 rosey
## Last update Fri Mar 21 10:45:10 2014 rosey
##

CC	= gcc -lm

RM	= rm -f

CFLAGS	= -W -Werror
CFLAGS	= -Wall -Wextra
CFLAGS	= -g3

NAME	= client

SRC	= my_kill.c	\
	  my_putchar.c	\
	  my_putstr.c	\
	  main.c

OBJS	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
