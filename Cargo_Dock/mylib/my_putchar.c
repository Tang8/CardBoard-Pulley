/*
** my_putchar.c for my_putchar in /home/cameron/Desktop/C_Jour01/carra_c/my_putchar
** 
** Made by CARRA Cameron
** Login   <carra_c@etna-alternance.net>
** 
** Started on  Mon Sep 26 13:10:58 2016 CARRA Cameron
** Last update Mon Sep 26 13:48:52 2016 CARRA Cameron
*/

#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}
