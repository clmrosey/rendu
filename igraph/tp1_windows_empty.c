/*
** tp1_windows_empty.c for tp1 in /home/rosey_c/rendu/igraph
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Thu Nov  7 14:34:00 2013 rosey
** Last update Thu Nov  7 16:31:24 2013 rosey
*/

#include"mlx.h"

int	main()
{
  void	*mlx_ptr;
  void	*win_ptr;
  int	a;
  int	b;
  int	c;
  int	d;

  a = 200;
  b = 50;
  c = 250;
  d = 200;
  
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, 1000, 1000, "MINI MOI YOP");
  while (mlx_pixel_put(mlx_ptr, win_ptr, a, b, 0xFFFF));  
  {
    mlx_pixel_put;
    a = a + 1;
  } 

  while (42)
    ;
  return (0);
}

