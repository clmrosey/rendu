/*
** my_factorielle_it.c for my_factorielle_it in /home/rosey_c/rendu/Piscine-C-Jour_05
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Fri Oct  4 09:22:34 2013 rosey
** Last update Fri Oct  4 17:27:31 2013 rosey
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_put_nbr(52)
{
  
}

int	fn(int n)
{
  if (n > 5)
	return(0);
  my_put_nbr(52);
  n = n + 1;
  fn(n);
  my_putchar('Q');
}

int	main()
{
  fn(0);
	return(0);
}
