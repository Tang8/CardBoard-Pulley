/*                                                                                                                                                                                          
** move_verif.c for move_verif.c in /home/tang/CardBoard Pulley/carra_c                                                                                
**                                                                                                                                             
** Made by TANG Gustin                                      
** Login   <tang_g@etna-alternance.net>
**                                       
** Started on  Mon Jan  16 10:06:11 2017 TANG gustin                                                                                                        
** Last update Mon Jan  16 11:05:57 201 TANG gustin                                                                                                                                                 
*/

#include "Hlib/my.h"
#include "Hlib/move.h"

void	verif_high(int x, int y, int a, int b, t_room *cargo_dock) {
  if (cargo_dock->map[x-1][y] == 'X') {
    my_putchar('\n');
    while (a < 12) {
      my_putchar(cargo_dock->map[a][b]);
      if (cargo_dock->map[a][b] == '\n') {
	a++;
	b = -1;
      }
      b++;
    }
  }
  else {
    cargo_dock->map[x][y] = ' ';
    cargo_dock->map[x - 1][y] = 'i';
    my_putchar('\n');
    while (a < 12) {
      while (cargo_dock->map[a][b] != '\n') {
	my_putchar(cargo_dock->map[a][b]);
	b++;
      }
      my_putchar('\n');
      b = 0;
      a++;
    }
  }
}

void    verif_down(int x, int y, int a, int b, t_room *cargo_dock) {
  if (cargo_dock->map[x+1][y] == 'X') {
    my_putchar('\n');
    while (a < 12) {
      my_putchar(cargo_dock->map[a][b]);
      if (cargo_dock->map[a][b] == '\n') {
	a++;
	b = -1;
      }
      b++;
    }
  }
  else {
    cargo_dock->map[x][y] = ' ';
    cargo_dock->map[x+1][y] = 'i';
    my_putchar('\n');
    while (a < 12) {
      while (cargo_dock->map[a][b] != '\n') {
	my_putchar(cargo_dock->map[a][b]);
	b++;
      }
      my_putchar('\n');
      b = 0;
      a++;
    }
  }
}

void    verif_right(int x, int y, int a, int b, t_room *cargo_dock) {
  if (cargo_dock->map[x][y+1] == 'X') {
    my_putchar('\n');
    while (a < 12) {
      my_putchar(cargo_dock->map[a][b]);
      if (cargo_dock->map[a][b] == '\n') {
	a++;
	b = -1;
      }
      b++;
    }
  }
  else {
    cargo_dock->map[x][y] = ' ';
    cargo_dock->map[x][y+1] = 'i';
    my_putchar('\n');
    while (a < 12) {
      while (cargo_dock->map[a][b] != '\n') {
	my_putchar(cargo_dock->map[a][b]);
	b++;
      }
      my_putchar('\n');
      b = 0;
      a++;
    }
  }
}

void    verif_left(int x, int y, int a, int b, t_room *cargo_dock) {
  if (cargo_dock->map[x][y-1] == 'X') {
    my_putchar('\n');
    while (a < 12) {
      my_putchar(cargo_dock->map[a][b]);
      if (cargo_dock->map[a][b] == '\n') {
	a++;
	b = -1;
      }
      b++;
    }
  }
  else {
    cargo_dock->map[x][y] = ' ';
    cargo_dock->map[x][y-1] = 'i';
    my_putchar('\n');
    while (a < 12) {
      while (cargo_dock->map[a][b] != '\n') {
	my_putchar(cargo_dock->map[a][b]);
	b++;
      }
      my_putchar('\n');
      b = 0;
      a++;
    }
  }
  
}
