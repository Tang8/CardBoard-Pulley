/*
** key.c for key.c in /home/tang/CardBoard Pulley/carra_c
**
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
**
** Started on  Mon Jan  16 10:06:11 2017 TANG gustin
** Last update Mon Jan  16 11:05:57 201 TANG gustin
*/

#include "Hlib/my.h"

int   use_key(t_room *map, t_player *player1) {
    int a;
    int b;
    int y;
    int x;

    a = 0;
    b = 0;
    y = player1->y_pos;
    x = player1->x_pos;
    if (player1->keys == 0) {
    my_putstr("Vous n'avez pas de clef ......");
    }
    else if (player1->keys >= 1 && map->map[x-1][y] == 'x') {
        player1->keys = player1->keys - 1;
        map->map[x-1][y] = ' ';
        while (a < map->height) {
            my_putchar(map->map[a][b]);
            if (map->map[a][b] == '\n') {
                a++;
                b = -1;
            }
            b++;
        }
        my_putstr("Vous utilisez une clef. La porte s'ouvre");
    }
    else {
      my_putstr("Ceci n'est pas une porte .....");
  }
  return 0;
}

int   get_key(t_room *map, t_player *player1) {

  if (player1->x_pos == map->x_key && player1->y_pos == map->y_key && map->key != 0) {
      my_putstr("Vous récuperez une clef !");
      map->key = map->key - 1;
      player1->keys = player1->keys + 1;
  }
  else {
    my_putstr("Il n'y a rien d'interressant par terre .....");
  }
  return 0;
}
