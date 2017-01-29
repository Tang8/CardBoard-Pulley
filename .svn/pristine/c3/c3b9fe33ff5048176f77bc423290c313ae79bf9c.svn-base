/*
** my_strcmp.c for my_strcmp in /home/cameron/Desktop/C_Jour04/carra_c/my_strcmp
** 
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
** 
** Started on  Thu Sep 29 14:04:22 2016 CARRA Cameron
** Last update Thu Sep 29 15:39:55 2016 CARRA Cameron
*/

void	my_putchar(char c);

int	my_strcmp(char *s1, char *s2)
{
  int	a;

  while ((*s1 && *s2) && (*s1 == *s2))
    {
      s1 = s1 + 1;
      s2 = s2 + 1;
    }
  a = *s1 - *s2;
  if (a == 0)
    {
      return (0);
    }
  if (a > 0)
    {
      return (1);
    }
  if (a < 0)
    {
      return (-1);
    }
  return (0);
}

int     my_strcmp2(char s1, char s2)
{
  int   a;

  a = s1 - s2;
  if (a == 0)
    {
      return (0);
    }
  if (a > 0)
    {
      return (1);
    }
  if (a < 0)
    {
      return (-1);
    }
  return (0);
}
