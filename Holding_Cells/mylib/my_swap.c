/*
** my_swap.c for my_swap in /home/cameron/Desktop/C_Jour03/carra_c/my_swap
** 
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
** 
** Started on  Wed Sep 28 13:42:59 2016 CARRA Cameron
** Last update Wed Sep 28 13:52:03 2016 CARRA Cameron
*/

void my_swap(int *a, int *b)
{
  int c;

  c = *a;
  *a = *b;
  *b = c;
}
