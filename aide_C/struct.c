/*
** struct.c for struc in /home/rosey_c/rendu/aide_C
** 
** Made by clément
** Login   <rosey_c@epitech.net>
** 
** Started on  Tue Dec 17 15:09:14 2013 clément
** Last update Tue Dec 17 16:19:24 2013 clément
*/

#include <mlx.h>


struct s_mlxinfo //information
{
  void	*mlxptr;
  void	*winptr;
};


struct s_image //image
{
  char	*data;
  int	linesize;
  int	bpp;
  int	endian;
};

typedef  struct s_epi
{
  struct        s_mlxinfo mlxinfo;
  struct        s_image   image;
}               t_epi;

int	main()
{
  t_epi epi;
  int	size_x;
  int	size_y;
 
  size_x = 500;
  size_y = 200;
  epi.mlxinfo.mlxptr = mlx_init();
  epi.mlxinfo.winptr = mlx_new_window(epi.mlxinfo.mlxptr, size_x, size_y, "coucou");
  while (42)
    {
    }
}
