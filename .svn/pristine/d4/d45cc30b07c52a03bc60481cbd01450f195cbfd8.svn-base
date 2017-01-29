/*                                                                                                                                                                                                              
** chained_list.c for chained_list.c in /home/tang/CardBoard Pulley/carra_c                                                                                                                                      
**                                                                                                                                                                                                              
** Made by CARRA Cameron                                                                                                                                                                                        
** Login   <carra_c@etna-alternance.net>                                                                                                                                                                       
**                                                                                                                                                                                                             
** Started on  Mon Jan  16 10:06:11 2017 TANG gustin                                                                                                                                                           
** Last update Mon Jan  16 11:05:57 201 TANG gustin                                                                                                                                                        
*/

#include "Hlib/my.h"

list chained_list(list list, t_room map)
{
    t_room *newmap;
    newmap = malloc(sizeof(t_room));
    newmap->map = map.map;
    newmap->next = list;
    return newmap;
}
