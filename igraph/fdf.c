/*
** fdf.c for tout-droit in /home/rosey_c/rendu/igraph
** 
** Made by rosey
** Login   <rosey_c@epitech.net>
** 
** Started on  Thu Nov 21 15:17:46 2013 rosey
** Last update Thu Nov 21 17:03:13 2013 rosey
*/

#include <mlx.h>
#include "my.h"



//int draw_cas_un(int x1,int y1,int x1,int y2,...)
  //{
  //int x;
  //
  //x = x1;
  //while (x <= x2)
  // {
  //  mlx_pixel_put(..., ..., x, y1+((y2-y1)*(x-x1))/(x2-x1), ...);
  //  x ++;
  // }
  //}


int    main()
{
  void *mlx_ptr;
  void *win_ptr;
  // void *mlx_new_image;
  //int	img;
  //int	mlx;
  //void *mlx_get_data_addr;

  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, 500, 1500, "moi moii moiiiii 1");
  // img = mlx_new_image(mlx, 300, 300);
  mlx_pixel_put(mlx_ptr, win_ptr, 250, 250, 0xFFFF);
  while (42)
    ;
}

