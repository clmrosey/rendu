/*
** varage.c for varage in /home/rosey_c/rendu/TP_printf
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Fri Nov 15 14:24:20 2013 rosey
** Last update Fri Nov 15 16:02:57 2013 rosey
*/

#include "stdarg.h"

struct ex3
{
  char	h;
  int	d;
  short	c;
}

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	fct(int param1, struct ex3  param2, char *param3)
{
  int	*ptr;

  ptr = &param3;
  printf("%p %d\n", ptr, *ptr);
  ptr = ptr + 1;
  printf("%p %d\n", ptr, *ptr);
  ptr = ptr + 1;
  printf("%p %d\n", ptr, *ptr);
}

int	main()
{
  struct ex3;
  fct(11, 2, 5);
}
