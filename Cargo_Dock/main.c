/*
** main.c for main.c in /home/tang/CardBoard Pulley/carra_c
**
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
**
** Started on  Mon Jan  16 10:06:11 2017 TANG gustin
** Last update Mon Jan  16 11:05:57 201 TANG gustin
*/

#include "Hlib/my.h"

typedef struct	s_func
{
  char		    *flags;
  void		    (*funct)();
}		        t_func;

t_func		    *init()
{
  t_func	    *fc;

  if ((fc = malloc(sizeof(t_func) * 6)))
    {
      fc[0].flags = "w";
      fc[0].funct = &my_high;
      fc[1].flags = "s";
      fc[1].funct = &my_down;
      fc[2].flags = "d";
      fc[2].funct = &my_right;
      fc[3].flags = "a";
      fc[3].funct = &my_left;
      fc[4].flags = "Quit";
      fc[4].funct = &my_leave;
      fc[5].flags = NULL;
      fc[5].funct = &test;
    }
  return (fc);
}

int		        start_game()
{
  char		    *command;
  int		       n;
  t_func	    *fc;
  t_room      *cargo_dock;
  int first;

  n = 0;
  fc = init();
  command = "pokemon";
  cargo_dock = display_map();
    first = 0;
  while (my_strcmp(command, "Quit") != 0)
    {
      my_putstr("Que faire ? ");
      command = readline();
      while (fc[n].flags != NULL && my_strcmp(fc[n].flags, command) != 0)
	     {
	       n = n + 1;
	     }
      fc[n].funct(cargo_dock, first);
        first = 1;

      n = 0;
      my_putchar('\n');
    }
  return (0);
}

int	main()
{
   start_game();
   return (0);
}

void            test()
{
    my_putstr("Cette commande n'existe pas !!");
}
