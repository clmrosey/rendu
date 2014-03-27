/*
** eval_expr.c for eval_expr in /home/rosey_c/rendu/Piscine-C-eval_expr
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Wed Oct 30 11:11:43 2013 rosey
** Last update Wed Nov  6 10:23:52 2013 rosey
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_put_bnr(int nb)
{
  if(nb >= 0 && nb < 10)
    {
      my_putchar(nb + 48);
    }

  if( nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }

  if( nb < 0)
    {
      my_putchar('-');
      my_put_nbr(nb * -1);
    }
}

char    *my_strncpy(char *dest, char *src, int n)
{
  int   i;

  i = 0;
  while (src[i] !='\0')
    {
      src[i] = dest[i];
      my_putchar(dest[i]);
      i = i + 1;
    }
  if (n > i)
    {
      my_putchar('\0');
    }
  return (dest);
}

int	eval_expr(char *str)
{
    
}
