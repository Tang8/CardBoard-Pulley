/*
** move.c for move.c in /home/tang/CardBoard Pulley/carra_c
**
** Made by TANG gustin / CARRA Cameron
** Login   <tang_g@etna-alternance.net>
**
** Started on  Mon Jan  16 10:06:11 2017 TANG gustin
** Last update Mon Jan  16 11:05:57 201 TANG gustin
*/

#include "Hlib/my.h"
#include "Hlib/move.h"
#include "move_verif.c"

int  my_high(t_room *map, t_player *player1) {
    state = player1->state;
    a = 0;
    b = 0;
    x = player1->x_pos;
    y = player1->y_pos;
    if (x-1 == -1 || y-1 == -1) {
        return 1;
    }
    if (map->map[x-1][y] == 'x' || map->map[x-1][y] == 'X' ||
       (my_strcmp2(state, 'i') == 0 && map->map[x-1][y] == 'H')) {
        while (a < map->height) {
            my_putchar(map->map[a][b]);
            if (map->map[a][b] == '\n') {
                a++;
                b = -1;
            }
            b++;
        }
    }
    else
      my_high2(x, y, map, player1);
    return 0;
}

int     my_down(t_room *map, t_player *player1) {
    state = player1->state;
    a = 0;
    b = 0;

    map->map[-1] = malloc(sizeof(char) * 30);
    x = player1->x_pos;
    y = player1->y_pos;
    if (map->map[x+1][y] == 'X' || (my_strcmp2(state, 'i') == 0 && map->map[x+1][y] == 'H')) {
        while (a < map->height) {
            my_putchar(map->map[a][b]);
            if (map->map[a][b] == '\n') {
                a++;
                b = -1;
            }
            b++;
        }
    }
    else {
      my_down2(x, y, map, player1);
    }
    return 0;
}

int     my_right(t_room *map, t_player *player1) {
    state = player1->state;
    a = 0;
    b = 0;

    map->map[-1] = malloc(sizeof(char) * 30);

    x = player1->x_pos;
    y = player1->y_pos;
    if (map->map[x][y+1] == 'X' || (my_strcmp2(state, 'i') == 0 && map->map[x][y+1] == 'H')) {
        while (a < map->height) {
            my_putchar(map->map[a][b]);
            if (map->map[a][b] == '\n') {
                a++;
                b = -1;
            }
            b++;
        }
    }
    else {
      my_right2(x, y, map, player1);
    }
    return 0;
}

int     my_left(t_room *map, t_player *player1) {
    state = player1->state;
    a = 0;
    b = 0;

    map->map[-1] = malloc(sizeof(char) * 30);

    x = player1->x_pos;
    y = player1->y_pos;
    if (map->map[x][y-1] == 'X' || (my_strcmp2(state, 'i') == 0 && map->map[x][y-1] == 'H')) {
        while (a < map->height) {
            my_putchar(map->map[a][b]);
            if (map->map[a][b] == '\n') {
                a++;
                b = -1;
            }
            b++;
        }
    }
    else {
      my_left2(x, y, map, player1);
    }
    return 0;
}

int  my_leave() {
  my_putstr("Goodbye");
  return 1;
}
