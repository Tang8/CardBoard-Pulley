/*
** move2.c for move2.c in /home/tang/CardBoard Pulley/carra_c
**
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
**
** Started on  Mon Jan  16 10:06:11 2017 TANG gustin
** Last update Mon Jan  16 11:05:57 201 TANG gustin
*/

#include "Hlib/my.h"
#include "Hlib/move.h"

int     up_down(t_room *map, t_player *player1)
{
    int a;
    int b;
    int y;
    int x;

    a = 0;
    b = 0;
    x = player1->x_pos;
    y = player1->y_pos;

    if (player1->state == 'i') {
        my_putstr("Vous vous couchez.\n");
        player1->state = '_';
    }
    else {
        my_putstr("Vous vous levez.\n");
        player1->state = 'i';
    }
    map->map[x][y] = player1->state;
    while (a < map->height) {
        while (map->map[a][b] != '\n') {
            my_putchar(map->map[a][b]);
            b++;
        }
        my_putchar('\n');
        b = 0;
        a++;
    }
    return 0;
}
