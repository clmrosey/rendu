/*
** modif_param.c for modif_param in /home/rosey_c/rendu/Piscine-C-simple
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Fri Oct 18 15:04:16 2013 rosey
** Last update Fri Oct 18 16:28:46 2013 rosey
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

void	modif_param(int *nb_ptr)
{
  *nb_ptr = 42;
}

int	main()
{
  int	nb;
  
  nb = 'z';
  modif_param(&nb);
  my_putchar(nb);
  return(0);
}
