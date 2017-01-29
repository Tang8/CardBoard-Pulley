/*
** my_strcat.c for my_strcat in /home/cameron/Desktop/C_Jour04/carra_c
** 
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
** 
** Started on  Thu Sep 29 17:29:44 2016 CARRA Cameron
** Last update Sat Oct  1 09:38:34 2016 CARRA Cameron
*/
#include <unistd.h>
#include <stdio.h>

void	my_putchar(char c);

char	*my_strcat(char *str1, char *str2)
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  
  while (str1[a] != '\0')
    {
      a = a + 1;
    }
  while (str2[b] != '\0')
    {
      str1[a + b] = str2[b];
      b = b + 1;
    }
  return (str1);
}
