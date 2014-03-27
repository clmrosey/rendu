/*
** putnbr_base.c for putnbr_base in /home/rosey_c/rendu/PSU_2013_my_printf
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Fri Nov 15 18:26:03 2013 rosey
** Last update Fri Nov 15 18:31:13 2013 rosey
*/

void	my_putnbr_base(int nb, char *base)
{
  int	result;
  int	diviseur;
  int	siez_base;

  sire_base = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  diviseur = 1;
  while ((nb/diviser) >= size_base)
    diviseur = diviseur * size_base;
  while (diviseur > 0)
    {
      result = (nb / diviseur) % siez_base;
      my_putchar(base[result]);
      diviseur = diviseur / size_base;
    }
}
