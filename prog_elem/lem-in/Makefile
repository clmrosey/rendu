##
## Makefile for lem-in in /home/rosey/rendu/prog_elem/lem-in
## 
## Made by rosey
## Login   <rosey@epitech.net>
## 
## Started on  Fri Mar 28 10:56:33 2014 rosey
## Last update Fri Mar 28 10:56:55 2014 rosey
##

CC	= gcc

NAME	= lem-in

SRCS	=

CFLAGS	+= -W -Werror -Wall -Wextra
CFLAGS	+= -ansi -pedantic -I.

OBJS	= $(SRCS:.c=.o)

RM	= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(SRCS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.phony: all clean flcean re
