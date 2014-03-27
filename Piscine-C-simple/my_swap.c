/*
** my_swap.c for my_swap in /home/rosey_c/rendu/Piscine-C-simple
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Fri Oct 18 16:31:29 2013 rosey
** Last update Fri Oct 18 17:21:20 2013 rosey
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_swap(int *a, int *b)
{
  int	ptr; 
  
  ptr = *a;
  *a = *b;
  *b = ptr;
}

int	main()
{
  int	a;
  int	b;

  a = 70;
  b = 80;
  my_swap(&a, &b);
  my_putchar(a);
}
