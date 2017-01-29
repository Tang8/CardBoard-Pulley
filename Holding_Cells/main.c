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
  int		    (*funct)();
}		t_func;

t_func		    *init()
{
  t_func	    *fc;

  if ((fc = malloc(sizeof(t_func) * 9)))
    {
      fc[0].flags = "w";
      fc[0].funct = &my_high;
      fc[1].flags = "s";
      fc[1].funct = &my_down;
      fc[2].flags = "d";
      fc[2].funct = &my_right;
      fc[3].flags = "a";
      fc[3].funct = &my_left;
      fc[4].flags = " ";
      fc[4].funct = &get_key;
      fc[5].flags = "e";
      fc[5].funct = &use_key;
      fc[6].flags = "c";
      fc[6].funct = &up_down;
      fc[7].flags = "Quit";
      fc[7].funct = &my_leave;
      fc[8].flags = NULL;
      fc[8].funct = &other;
    }
  return (fc);
}

int             load_map(t_player *player1, t_room *map, t_room *map2) {
    char	*command;
    int		n;
    t_func	*fc;
    int         ret;

    map = display_map(map);
    n = 0;
    ret = 0;
    fc = init();
    command = "pokemon";
    define_struct(player1, map, map2);
    player1->x_pos = map->spawn_x;
    player1->y_pos = map->spawn_y;
    while (my_strcmp(command, "Quit") != 0 && ret == 0)
    {
        my_putstr("Que faire ? ");
        command = readline();
        while (fc[n].flags != NULL && my_strcmp(fc[n].flags, command) != 0)
        {
            n = n + 1;
        }
        ret = fc[n].funct(map, player1);
        n = 0;
        my_putchar('\n');
    }
    return 0;
}

void define_struct(t_player *player1, t_room *map, t_room *map2) {
    player1->state = 'i';
    player1->keys = 0;
    player1->x_pos = 0;
    player1->y_pos = 0;
    if (my_strcmp(map->map_path, "maps/holding_cells.map") != 0) {
        map2->map_path = "maps/holding_cells.map";
        map2->spawn_x = 3;
        map2->spawn_y = 1;
        map2->height = 6;
        map2->next = NULL;
        map2->key = 1;
        map2->x_key = 4;
        map2->y_key = 23;
        map->map_path = "maps/cargo_dock.map";
        map->spawn_x = 9;
        map->spawn_y = 2;
        map->height = 12;
        map->next = map2;
        map->key = 0;
    }
    else
    {
        map->spawn_x = 3;
        map->spawn_y = 1;
        map->height = 6;
        map->next = NULL;
        map->key = 1;
        map->x_key = 4;
        map->y_key = 23;
    }
}

int	main()
{
    t_player    *player1;
    t_room      *map;
    t_room      *map2;

    player1 = malloc(sizeof(t_player));
    map = malloc(sizeof(t_room));
    map2 = malloc(sizeof(t_room));
    map->map_path = "maps/cargo_dock.map";
    define_struct(player1, map, map2);
    while (map != NULL) {
        load_map(player1, map, map2);
        map = map->next;
    }
    my_putstr("To be continued...\n");
    return 0;
}

int            other()
{
    my_putstr("Cette commande n'existe pas !!");
    return 0;
}
