/*
** my_strlen.c for my_strlen in /home/cameron/Desktop/C_Jour03/carra_c/my_strlen
** 
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
** 
** Started on  Wed Sep 28 10:05:38 2016 CARRA Cameron
** Last update Wed Sep 28 19:33:12 2016 CARRA Cameron
*/

void	my_putchar(char c);

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != '\0')
    {
      i = i + 1;
    }
  return(i);
}
