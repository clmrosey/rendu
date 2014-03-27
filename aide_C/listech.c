/*
** listech.c for liste_chenée in /home/rosey_c/rendu/aide_C
**
** Made by clément
** Login   <rosey_c@epitech.net>
**
** Started on  Wed Dec 18 09:22:13 2013 clément
** Last update Wed Dec 18 11:04:52 2013 clément
*/

#include <stdlib.h>
#include "list.h"
#include <stdio.h>
#include <unistd.h>

int	my_put_in_list(struct s_list **list, char *name, int age)
{
  int	next;

  struct s_list *elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (1);
  elem->name = name;
  elem->age  = age;
  elem->next = next;
  *list = elem;

  return (0);
}

void	my_show_list(struct s_list *list)
{
  struct s_list *tmp;

  tmp = list;
  while(tmp != NULL)
    {
      printf("%s\n",tmp->name);
      tmp = tmp->next;
    }
}

int	main()
{
  struct s_list *list;

  list = NULL;
  my_put_in_list(&list, "toto", 42);
  my_put_in_list(&list, "titi", 24);

  my_show_list(list);

   return (0);
}
