/*
** display_map.c for display_map.c in /home/tang/CardBoard Pulley/carra_c
**
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
**
** Started on  Mon Jan  16 10:06:11 2017 TANG gustin
** Last update Mon Jan  16 11:05:57 201 TANG gustin
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "mylib/lib.h"
#include "Hlib/display.h"

void	loop(t_room *map) {

  map->map = malloc(sizeof(char *) * 50);
  while (z < 20) {
    map->map[z] = malloc(sizeof(char) * 30);
    z++;
  }
}

t_room    *display_map(t_room *map) {

    x = 0;
    y = 0;
    z = 0;

    loop(map);
    path = map->map_path;
    fd = open(path, O_RDONLY);
    buffer = malloc(sizeof(char *));
    file = read(fd,buffer, 1);
    while (file == 1) {
        map->map[x][y] = buffer[0];
        my_putchar(map->map[x][y]);
        if (buffer[0] == '\n') {
            x++;
            map->map[x][y] = '\0';
            y = -1;
        }
        y++;
        file = read(fd, buffer, 1);
    }
    map->map[x][y] = '\0';
    close(fd);
    free(buffer);
    my_putchar('\n');
    return map;
}
