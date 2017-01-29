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

void	loop(int e) {
  while (e < 20) {
    cargo_dock->map[e] = malloc(sizeof(char) * 30);
    e++;
  }
}

t_room *display_map() {
    x = 0;
    y = 0;
    z = 0;

    cargo_dock = malloc(sizeof(*cargo_dock) * 50);
    cargo_dock->map = malloc(sizeof(char *) * 50);
    loop(z);
    fd = open("maps/cargo_dock.map", O_RDONLY);
    buffer = malloc(sizeof(char *));
    file = read(fd,buffer, 1);
    while (file == 1) {
        cargo_dock->map[x][y] = buffer[0];
        my_putchar(cargo_dock->map[x][y]);
        if (buffer[0] == '\n') {
            x++;
            cargo_dock->map[x][y] = '\0';
            y = -1;
        }
        y++;
        file = read(fd, buffer, 1);
    }
    cargo_dock->map[x][y] = '\0';
    close(fd);
    free(buffer);
    return cargo_dock;
}
