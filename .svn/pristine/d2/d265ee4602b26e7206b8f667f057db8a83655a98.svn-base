/*
** my_strup.c for my_strup in /home/cameron/Desktop/C_Jour07/carra_c/my_aff_up_params/my_strup
** 
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
** 
** Started on  Mon Oct  3 12:37:26 2016 CARRA Cameron
** Last update Wed Oct  4 19:00:51 2017 CARRA Cameron
*/
#include <stdlib.h>

int	my_strlen(char *str);

char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  int	a;
  char	*b;
  int	c;

  c = my_strlen(str);
  a = sizeof(*str);
  b = malloc(a * c);
  my_strcpy(b, str);
  return (b);
}
