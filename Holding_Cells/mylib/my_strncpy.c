/*
** my_strncpy.c for my_strncpy in /home/cameron/Desktop/C_Jour04/carra_c/my_strncpy
** 
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
** 
** Started on  Thu Sep 29 12:07:46 2016 CARRA Cameron
** Last update Thu Sep 29 13:58:16 2016 CARRA Cameron
*/

void	my_putchar(char c);

void	my_putstr(char *str);

char	*my_strncpy(char *dest, char *src, int n)
{
  int	a;

  a = 0;
  while ((a < n) && (src[a] != '\0'))
    {
      dest[a] = src[a];
      a = a + 1;
    }
  while (a < n)
    {
      dest[a] = '\0';
      a = a + 1;
     }
  return (dest);
}
