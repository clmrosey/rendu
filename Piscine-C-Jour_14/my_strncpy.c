/*
** my_strncpy.c for my_strncpy in /home/rosey_c/rendu/Piscine-C-Jour_14
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Fri Oct 25 16:08:12 2013 rosey
** Last update Fri Oct 25 16:24:53 2013 rosey
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

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

int	main()
{
  my_strncpy(*dest, *src, *n);
}
