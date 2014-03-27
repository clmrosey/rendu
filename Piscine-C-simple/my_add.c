/*
** my_add.c for my_add in /home/rosey_c/rendu/Piscine-C-simple
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Fri Oct 18 14:16:45 2013 rosey
** Last update Fri Oct 18 15:02:51 2013 rosey
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_add(int left, int right)
{
  return (left + right);
}

int main()
{
  int	left;
  int	right;
  
  left = 56;
  right = 20;
  my_putchar(my_add(left, right));
}
