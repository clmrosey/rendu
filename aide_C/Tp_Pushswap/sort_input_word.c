/*
** sort_input_word.c for sort_input_word in /home/rosey_c/rendu/aide_C/Tp_Pushswap
** 
** Made by clément
** Login   <rosey_c@epitech.net>
** 
** Started on  Thu Dec 19 14:24:10 2013 clément
** Last update Thu Dec 19 16:56:47 2013 clément
*/

#include <string.h>
#include <stdio.h>

typedef struct	s_word
{
  int	r;
  char	 *truc;
  struct s_word *worl;
}         s_word;

void	  liste*  listt();
{
   liste* racine = malloc (sizeof *racine);
   if (racine != NULL)
     {
       racine->prec = racine;
       racine->suiv = racine;
     }
   return (racine);
 }

int	sort_input_word()
{
  char	*line;

  get_next_line(line[0]);
  return (NULL);
}

int	main()
{
  sort_input_word();
  liste();
}
