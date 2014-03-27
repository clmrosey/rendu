/*
** list.h for list in /home/rosey_c/rendu/aide_C
** 
** Made by clément
** Login   <rosey_c@epitech.net>
** 
** Started on  Wed Dec 18 09:30:55 2013 clément
** Last update Wed Dec 18 09:36:33 2013 clément
*/

#ifndef LIST_H_
# define  LIST_H_

struct             s_list
{
  char             *name;
  int               age;
  struct s_list    *next;
};

int		   my_put_in_list(struct s_list **list, char *name, int age);

#endif 
