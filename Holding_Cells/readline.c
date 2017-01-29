/*
** readline.c for readline.c in /home/tang/Battle_For_Azeroth/bernar_r/recruitment
**
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
**
** Started on  Fri Jan  19 03:48:58 2017 TANG gustin
** Last update Fri Jan  19 04:16:21 2017 TANG gustin
*/

#include <stdlib.h>
#include "Hlib/my.h"

char		*readline() {
  size_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}