/*
** my_strncmp.c for my_strncmp in /home/cameron/Desktop/C_Jour04/carra_c/my_strncmp
**
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
**
** Started on  Thu Sep 29 15:50:31 2016 CARRA Cameron
** Last update Thu Sep 29 17:03:42 2016 CARRA Cameron
*/

void	my_putchar(char c);

int	my_strncmp(char *s1, char *s2, int n)
{
  int	a;
  int	b;

  b = 1;
  while ((*s1 && *s2) && (*s1 == *s2) & (b < n))
    {
      s1 = s1 + 1;
      s2 = s2 + 1;
      b = b + 1;
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
