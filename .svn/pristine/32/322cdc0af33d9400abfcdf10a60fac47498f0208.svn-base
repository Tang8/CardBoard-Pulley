/*
** my.h for my.h in /home/tang/CardBoard Pulley/carra_c
**
** Made by TANG gustin
** Login   <tang_g@etna-alternance.net>
**
** Started on  Mon Jan  16 10:06:11 2017 TANG gustin
** Last update Mon Jan  16 11:05:57 201 TANG gustin
*/

#ifndef LIB_H
#define LIB_H

typedef struct      s_room
{
    char            **map;
    struct s_room   *next;
    char            *map_path;
    int             height;
    int             spawn_x;
    int             spawn_y;
    int             key;
    int             x_key;
    int             y_key;
}                   t_room;

typedef t_room      *list;

void                my_putchar(char c);
int                 my_isneg(int n);
void                my_put_nbr(int nb);
void                my_swap(int *a, int *b);
void                my_putstr(char *str);
int                 my_strlen(char *str);
int                 my_getnbr(char *str);
char                *my_strcpy(char *dest, char *src);
char                *my_strncpy(char *dest, char *src, int n);
int                 my_strcmp(char *s1, char *s2);
int                 my_strncmp(char *s1, char *s2, int n);
char                *my_strcat(char *str1, char *str2);
char                *my_strncat(char *str1, char *str2, int n);
char                *my_strstr(char *str, char *to_find);
char                *my_strdup(char *str);
char                **my_str_to_wordtab(char *str);
char                *readline();
t_room              *display_map(t_room *map);

#endif
