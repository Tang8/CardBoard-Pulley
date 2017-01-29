/*
** my_strncat.c for my_strncat in /home/cameron/Libmy/carra_c
** 
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
** 
** Started on  Sat Oct  1 13:12:51 2016 CARRA Cameron
** Last update Sat Oct  1 13:12:55 2016 CARRA Cameron
*/

void	my_putchar(char c);

char	*my_strncat(char *dest, char *src, int n)
{
  int	a;
  int	b;
  int	c;

  a = 0;
  b = 0;
  c = 0;
  
  while (dest[a] != '\0')
    {
      a = a + 1;
    }
  while (src[b] != '\0' && c < n)
    {
      dest[a + b] = src[b];
      b = b + 1;
      c = c + 1;
    }
  if (c == n)
    {
      dest[a + b] = '\0';      
    }
  return (dest);
}
