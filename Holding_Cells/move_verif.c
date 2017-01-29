/*
** move_verif.c for move_verif.c in /home/tang/CardBoard Pulley/carra_c
**
** Made by TANG gustin / CARRA Cameron
** Login   <tang_g@etna-alternance.net>
**
** Started on  Mon Jan  16 10:06:11 2017 TANG gustin
** Last update Mon Jan  16 11:05:57 201 TANG gustin
*/

#include "Hlib/my.h"
#include "Hlib/move.h"

void  my_high2(int x, int y, t_room *map, t_player *player1) {
  a = 0;
  b = 0;
  if ((player1->x_pos == map->x_key && player1->y_pos == map->y_key) && map->key != 0)
      map->map[x][y] = 'K';
  else
      map->map[x][y] = ' ';
  if (map->map[x-1][y] == 'H')
      map->map[x - 2][y] = player1->state;
  else
      map->map[x - 1][y] = player1->state;
  while (a < map->height) {
      while (map->map[a][b] != '\n') {
        my_putchar(map->map[a][b]);
        b++;
        }
      my_putchar('\n');
      b = 0;
      a++;
    }
  if (map->map[x-1][y] == 'H')
     player1->x_pos = x-2;
  else {
     player1->x_pos = x-1;
     player1->y_pos = y;
  }
}

void     my_down2(int x, int y, t_room *map, t_player *player1) {
  a = 0;
  b = 0;
  if ((player1->x_pos == map->x_key && player1->y_pos == map->y_key) && map->key != 0)
      map->map[x][y] = 'K';
  else
      map->map[x][y] = ' ';
  if (map->map[x+1][y] == 'H')
      map->map[x+2][y] = player1->state;
  else
      map->map[x+1][y] = player1->state;
  while (a < map->height) {
      while (map->map[a][b] != '\n') {
         my_putchar(map->map[a][b]);
         b++;
       }
       b = 0;
       my_putchar('\n');
       a++;
    }
  if (map->map[x+1][y] == 'H')
      player1->x_pos = x+2;
  else {
      player1->x_pos = x+1;
      player1->y_pos = y;
  }
}

void     my_right2(int x, int y, t_room *map, t_player *player1) {
  a = 0;
  b = 0;
  if ((player1->x_pos == map->x_key && player1->y_pos == map->y_key) && map->key != 0)
     map->map[x][y] = 'K';
  else
     map->map[x][y] = ' ';
  if (map->map[x][y+1] == 'H')
     map->map[x][y+2] = player1->state;
  else
     map->map[x][y+1] = player1->state;
  while (a < map->height) {
     while (map->map[a][b] != '\n') {
        my_putchar(map->map[a][b]);
        b++;
      }
     b = 0;
     my_putchar('\n');
     a++;
  }
  player1->x_pos = x;
  if (map->map[x][y+1] == 'H')
     player1->y_pos = y+2;
  else
     player1->y_pos = y+1;
}

void     my_left2(int x, int y, t_room *map, t_player *player1) {
  a = 0;
  b = 0;
  if ((player1->x_pos == map->x_key && player1->y_pos == map->y_key) && map->key != 0)
     map->map[x][y] = 'K';
  else
     map->map[x][y] = ' ';
  if (map->map[x][y-1] == 'H')
     map->map[x][y-2] = player1->state;
  else
     map->map[x][y-1] = player1->state;
  while (a < map->height) {
     while (map->map[a][b] != '\n') {
       my_putchar(map->map[a][b]);
       b++;
       }
     b = 0;
     my_putchar('\n');
     a++;
   }
  player1->x_pos = x;
  if (map->map[x][y-1] == 'H')
     player1->y_pos = y-2;
  else
     player1->y_pos = y-1;
}
