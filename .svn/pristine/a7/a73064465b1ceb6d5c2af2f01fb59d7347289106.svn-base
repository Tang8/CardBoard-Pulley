/*
** my_put_nbr.c for my_put_nbr in /home/cameron/Desktop/carra_c/my_put_nbr
** 
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
** 
** Started on  Fri Sep 30 13:42:36 2016 CARRA Cameron
** Last update Sat Oct  1 16:02:01 2016 CARRA Cameron
*/

void			my_putstr(char *str);

void			my_putchar(char c);

void			my_put_nbr(int nb)
{
  int			nb2;
  int			e;
  int			f;
  int			g;

  e = 1;
  f = 0;
  g = 0;
  if (nb == -2147483648)
    {
      my_putstr("-2147483648");
      return ;
    }
  if (nb < 0)
    {
      nb = - nb;
      my_putchar('-');
    }
  nb2 = nb;
  while (nb > 10)
    {
      nb = nb / 10;
      e = e * 10;
      f = f + 1;
    }
  while (g <= f)
    {
      my_putchar((nb2 / e) % 10 + 48);
      e = e / 10;
      g = g + 1;
    }
}
