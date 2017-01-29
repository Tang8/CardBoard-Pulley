/*
** player.h for player.h in /home/tang/CardBoard Pulley/carra_c
**
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
**
** Started on  Mon Jan  16 10:06:11 2017 TANG gustin
** Last update Mon Jan  16 11:05:57 201 TANG gustin
*/

#ifndef CARGO_DOCK_PLAYER_H
#define CARGO_DOCK_PLAYER_H

typedef struct      s_player
{
    char            name[6];
    char            state;
    int             keys;
    int             x_pos;
    int             y_pos;
}                   t_player;

#endif
