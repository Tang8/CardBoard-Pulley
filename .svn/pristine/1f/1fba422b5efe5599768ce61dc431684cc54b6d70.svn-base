/*
** my_getnbrtest.c for my_getnbr in /home/cameron/Desktop/carra_c/my_getnbr
** 
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
** 
** Started on  Fri Sep 30 14:46:28 2016 CARRA Cameron
** Last update Sat Oct  1 16:50:46 2016 CARRA Cameron
*/

void	my_putchar(char c);

void	my_put_nbr(int nb);

int	my_getnbr(char *str)
{
  int	a;
  int	b;
  int	c;
  int	d;

  a = 0;
  b = 0;
  c = 0;
  d = 0;
  while ((str[b] == '-' || str[b] == '+') && str[b] != '\0')
    {
      b = b + 1;
    }
  while (str[b] != '\0' && str[b] >= 48 && str[b] <= 57)
    {
      d = d * 10;
      d = d + str[b] - 48;
      b = b + 1;
    }
  while ((str[a] < 48 || str[a] > 57) && str[a] !='\0')
    {
      if (str[a] == '-')
	{
	  c = c + 1;
	}
      a = a + 1;
    }
  if (c % 2 == 1)
    {
      d = d * -1;
    }
  return (d);
}
