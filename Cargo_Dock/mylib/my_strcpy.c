/*
** my_strcpy.c for my_strcpy in /home/cameron/Desktop/C_Jour04/carra_c/my_strcpy
** 
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
** 
** Started on  Thu Sep 29 11:35:06 2016 CARRA Cameron
** Last update Thu Sep 29 12:03:48 2016 CARRA Cameron
*/

char	*my_strcpy(char *dest, char *src)
{
  int	a;

  a = 0;
  while (src[a] != '\0')
    {
      dest[a] = src[a];
      a = a + 1;
    }
  dest[a] = '\0';
  return (dest);
}
