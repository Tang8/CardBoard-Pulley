/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/cameron/Desktop/C_Jour07/carra_c/my_str_to_wordtab
** 
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
** 
** Started on  Tue Oct  3 16:28:13 2017 CARRA Cameron
** Last update Wed Oct  4 19:03:25 2017 CARRA Cameron
*/

#include <stdlib.h>

int	alpha(char c);

int	word_count(char *str);

char	letter_count(char *str);

void	cpy(char *dest, char *src);

char	**my_str_to_wordtab(char *str)
{
  char	**array;
  int	a;
  int	b;

  a = 0;
  b = 0;
  array = malloc(sizeof(*array) * (word_count(str) + 1));
  while (str[a] != 0)
    {
      if (alpha(str[a]) == 1)
	{
	  array[b] = malloc(letter_count(str) * sizeof(*array));
	  cpy(array[b], str + a);
	  b = b + 1;
	  while (alpha(str[a]) == 1)
	    {
	      a = a + 1;
	    }
	}
      if (str[a] != 0)
	{
	  a = a + 1;
	}
    }
  array[b] = 0;
  return (array);
}

void	cpy(char *dest, char *src)
{
  int	a;
  
  a = 0;
  while (alpha(src[a]) == 1)
    {
      dest[a] = src[a];
      a = a + 1;
    }
  dest[a] = '\0';
}

int	word_count(char *str)
{
  int	nb_words;
  int	y;
  int	a;
  
  y = 0;
  nb_words = 0;
  while (str[y] != '\0')
    {
      a = alpha(str[y]);
      if (a == 1)
	{
	  a = alpha(str[y + 1]);
	  if (a == 0)
	    {
	      nb_words = nb_words + 1;
	    }
	}
      y = y + 1;
    }
  return (nb_words);
}

char	letter_count(char *str)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (alpha(str[i]) == 1)
    {
      n = n + 1;
      i = i + 1;
    }
  return (n);
}

int	alpha(char c)
{
  if ((c > 47 && c < 58) ||
      (c > 64 && c < 91) ||
      (c > 96 && c < 123))
    {
      return (1);
    }
  return (0);
}
