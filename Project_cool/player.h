/*
** player.h for player in /home/rosey_c/rendu/Project_cool
** 
** Made by clément
** Login   <rosey_c@epitech.net>
** 
** Started on  Mon Jan 20 12:03:44 2014 clément
** Last update Mon Jan 20 15:01:59 2014 clément
*/

#ifndef _PLAYER_H
# define _PLAYER_H

typedef struct s_harmer
{
  int	strenght;
  int	att_speed;
  int	vitality;
} t_harmer;

typedef struct s_doll
{
  int   inteligence;
  int   att_speed;
  int   vitality;
} t_doll;

typedef struct s_stick
{
  int   dexterity;
  int   att_speed;
  int   vitality;
} t_stick;

typedef struct s_weapon
{
  t_harmer      hamer;
  t_stick       stick;
  t_doll        doll;
} t_weapon;

typedef struct s_stat
{
  int   strenght;
  int   dexterity;
  int   inteligence;
  int   vitality;
  int   amor;
  int   domage;
} t_stat;

typedef struct s_player
{
  char	name[31];
  char	*class;
  int	hp;
  unsigned int	lvl;
  int	xp;
  t_weapon	weapon;
} t_player;

#endif
