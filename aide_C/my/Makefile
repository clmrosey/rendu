##
## makefile for makefile in /home/rosey_c/rendu/Piscine-C-lib/my
##
## Made by rosey
## Login   <rosey_c@epitech.net>
##
## Started on  Mon Oct 21 09:50:19 2013 rosey
## Last update Fri Dec 20 15:14:53 2013 clément
##

cc	= ar rc

SRCS	= my_swap.c 	\
	  my_putchar.c 	\
	  my_strcpy.c 	\
	  my_strlen.c 	\
	  my_strcat.c 	\
	  my_strncpy.c	\
	  my_put_nbr.c	\
	  my_putstr.c	\
	  my_isneg.c


RM	= rm -f

NAME	= libmy.a

OBJS	= $(SRCS:.c=.o)


all: $(NAME)

$(NAME):  $(OBJS)
	$(cc) $(NAME) $(OBJS)
	cp $(NAME) ../

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
