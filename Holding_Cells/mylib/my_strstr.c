/*
** my_strstr.c for my_strstr in /home/cameron/Libmy/carra_c
** 
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
** 
** Started on  Sat Oct  1 13:16:14 2016 CARRA Cameron
** Last update Wed Oct  4 15:46:36 2017 CARRA Cameron
*/

char	*my_strstr(char *str, char *to_find)
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  if (to_find[b] != '\0')
    {
      while (str[a]!= 0)
	{
	  while (str[a] == to_find[b])
	    {
	      a = a + 1;
	      b = b + 1;
	      if (to_find[b] == 0)
		{
		  return &str[a - b];
		}
	    }
	  b = 0;
	  a = a + 1;
	}
    }
  return (0);
}
