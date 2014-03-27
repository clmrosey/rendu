/*
** rtv1.c for rtv1 in /home/rosey/rendu/MUL_2014_rtv1
** 
** Made by rosey
** Login   <rosey@epitech.net>
** 
** Started on  Fri Feb  7 15:18:24 2014 rosey
** Last update Wed Feb 26 09:56:21 2014 rosey
*/

#include "mlx.h"
#include <stdlib.h>
#include "my.h"

/*char	*calc(char *data, int a, int b, void *mlx_ptr)
{

  int	bpp;
  int	sizeline;
  int	endian;
  int	x;
  int	y;
  unsigned char	 *ptr;
  int	colo;

  x = 0;
  y = 0;
  colo = 0x66FF33;
  ptr = (unsigned char*) &colo;
  a = x * bpp;
  b = y * sizeline;
  data = mlx_get_data_addr(mlx_ptr, &bpp, &sizeline, &endian);
  data[a + b + 1] = ptr[1];
  data[a + b + 2] = ptr[2];
  data[a + b + 3] = ptr[3];
  return (data);
  }*/

int	calac()
{
  return (0x66FF33);
}

int	remplis_image()
{
  int	x;
  int	y;
  void	*mlx_ptr;
  void	*win_ptr;

  x = 0;
  y = 0;
  mlx_ptr = 0;
  win_ptr = 0;
  while (x < 800)
    {
      while(y < 800)
	{
	  mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0x66FF33);;
	  y++;
	}
      x++;
    }
  return(0);
}

int	imag1()
{
  void  *mlx_ptr;
  void  *win_ptr;
  void  *img_ptr;
  int   x;
  int   y;
  /* char  *data;
   int   a;
     int   b;*/


  /* a = 0;
     b = 0;*/
  x = 0;
  y = 0;
  /* data = 0;*/
  if ((mlx_ptr = mlx_init()) == 0)
    {
      my_putstr("error");
      return (0);
    }
  img_ptr = mlx_new_image(mlx_ptr, 800, 800);
  win_ptr = mlx_new_window(mlx_ptr, 800, 800, "RtV1");
  /* data = calc(data, a, b, img_ptr);*/
  mlx_pixel_put(mlx_ptr, win_ptr, x, y, 0x66FF33);
  remplis_image();
  mlx_put_image_to_window(mlx_ptr, win_ptr, img_ptr, 0, 0);
  mlx_loop(mlx_ptr);
  return (1);
}

int	main()
{
  imag1();
  return (0);
}
