/*
** my_putchar.c for myputchar in /home/Alex.Chamardbois/CPool/CPool_Day07/lib/my
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Tue Oct 11 10:36:40 2016 Alexandre Chamard-bois
** Last update Thu Nov 17 08:11:44 2016 Alexandre Chamard-bois
*/

#include "my.h"

void my_putchar(char c)
{
  write(1, &c, 1);
}
