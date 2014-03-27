/*
** my_strdup.c for my_strdup in /home/rosey_c/rendu/Piscine-C-Jour_14
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Fri Oct 25 17:14:05 2013 rosey
** Last update Fri Oct 25 17:15:15 2013 rosey
*/

#include <stdlib.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
}

char	*my_strdup(char *src)
{
