/*
** my_putchar.c for my_putchar in /home/rosey_c/rendu/Piscine-C-lib/my
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Mon Oct 21 19:49:54 2013 rosey
** Last update Wed Feb 12 16:15:13 2014 rosey
*/

#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
