/*
** draw_line.c for draw_line in /home/rosey_c/rendu/igraph
**
** Made by rosey
** Login   <rosey_c@epitech.net>
**
** Started on  Fri Dec  6 14:23:53 2013 rosey
** Last update Sun Dec  8 19:10:31 2013 rosey
*/

#include <mlx.h>

int	draw_cas_un(int x1, int y1, int x2, int y2)
{
  int	x;
  void	*mlx_ptr;
  void	*win_ptr;

  x = 1;
  while (x <= x2)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, x, y1+((y2-y1)*(x-x1))/(x2-x1), 0xFFFFFF);
      x ++;
    }
}

int	draw_cas_cinq(int x1, int y1, int x2, int y2)
{
  int	y;
  void	*mlx_ptr;
  void	*win_ptr;

  y = 1;
  while (y <= y2)
    {
      mlx_pixel_put(mlx_ptr, win_ptr, y, x1+((x2-x1)*(y-y1))/(y2-y1), 0xFFFFFF);
      y ++;
    }
}

int	main()
{
  draw_cas_un();
  draw_cas_cinq();
}
