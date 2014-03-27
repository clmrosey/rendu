/*
** my_str_isnum.c for my_str_isnum in /home/rosey/rendu/Allum1
** 
** Made by rosey
** Login   <rosey@epitech.net>
** 
** Started on  Wed Feb 12 16:34:20 2014 rosey
** Last update Thu Feb 13 12:36:14 2014 rosey
*/

int	my_str_isnum(int  *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= '0' && (str[i] <= '9'))
      i++;
      return (1);
    }
  else
    return (0);
}
