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

void  my_high(t_room *cargo_dock, int init) {
    e = init;
    x = 0;
    y = 0;
    a = 0;
    b = 0;
    frame = '\0';

    cargo_dock->map[-1] = malloc(sizeof(char) * 30);
    while (frame != 'i' && frame != 'O') {
        frame = cargo_dock->map[x][y];
        if (frame == '\n') {
            x++;
            y = -1;
        }
        y++;
    }
    y = y-1;
    if (x-1 == -1 || y-1 == -1) {
        my_putstr("To be continued...\n");
        exit(0);
    }
    verif_high(x, y, a, b, cargo_dock);
}

void  my_down(t_room *cargo_dock, int init) {
    e = init;
    x = 0;
    y = 0;
    a = 0;
    b = 0;
    frame = '\0';

    while (frame != 'i' && frame != 'O') {
        frame = cargo_dock->map[x][y];
        if (frame == '\n') {
            x++;
            y = -1;
        }
        y++;
    }
    y = y-1;
    verif_down(x, y, a, b, cargo_dock);
}

void  my_right(t_room *cargo_dock, int init) {
    e = init;
    x = 0;
    y = 0;
    a = 0;
    b = 0;
    frame = '\0';


    while (frame != 'i' && frame != 'O') {
        frame = cargo_dock->map[x][y];
        if (frame == '\n') {
            x++;
            y = -1;
        }
        y++;
    }
    y = y-1;
    verif_right(x, y, a, b, cargo_dock);
}

void  my_left(t_room *cargo_dock, int init) {
    e = init;
    x = 0;
    y = 0;
    a = 0;
    b = 0;
    frame = '\0';


    while (frame != 'i' && frame != 'O') {
        frame = cargo_dock->map[x][y];
        if (frame == '\n') {
            x++;
            y = -1;
        }
        y++;
    }
    y = y-1;
    verif_left(x, y, a, b, cargo_dock);
}

void  my_leave()
{
  my_putstr("Goodbye");
}
