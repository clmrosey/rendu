/*
** minishell1.c for minishell1 in /home/rosey_c/rendu/PSU_2013_minishell1
** 
** Made by clément
** Login   <rosey_c@epitech.net>
** 
** Started on  Fri Dec 20 10:36:09 2013 clément
** Last update Mon Jan  6 14:33:26 2014 clément
*/

#include <unistd.h>
#include <sys/types.h>

int	fou()
{
  char	buffer[4000];

  my_putstr("$K");
  if (read(0, buffer, 4000) <= 0)
    {
      my_putstr("[ERROR]");
    }
  my_putstr(buffer);
  buffer[0] = '\0';
}

int	main()
{
  fou();
}
