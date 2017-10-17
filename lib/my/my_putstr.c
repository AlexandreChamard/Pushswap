/*
** my_putstr.c for my_putstr in /home/Alex.Chamardbois/CPool/CPool_Day04
**
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
**
** Started on  Thu Oct  6 12:08:47 2016 Alexandre Chamard-bois
** Last update Thu Nov 17 09:55:12 2016 Alexandre Chamard-bois
*/

#include "my.h"

int	my_putstr(char *str, int count)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i = i + 1;
      count += 1;
    }
  return (count);
}

static int	modulo(unsigned int nb, int *size)
{
  int	i;

  i = 1;
  while (nb > 7)
    {
      nb = nb / 8;
      i = i * 8;
      *size += 1;
    }
  return (i);
}

void	my_put_octal(unsigned int nb, char *bs)
{
  int size;
  int	mod;
  int	i;

  size = 0;
  mod = modulo(nb, &size);
  while (size < 2)
    {
      my_putchar('0');
      size += 1;
    }
  i = 0;
  while (mod > 0)
    {
      i = nb / mod;
      my_putchar(bs[i]);
      nb = nb - mod * i;
      mod = mod / 8;
    }
}

int my_putstr_S(char *str, int count)
{
  int i;

  i = 0;
  while (str[i])
  {
    if (str[i] >= 32 && str[i] <= 126)
      {
        my_putchar(str[i]);
        count += 1;
      }
    else
      {
        my_putchar('\\');
        count += 4;
        my_put_octal(str[i], "01234567");
      }
    i += 1;
    }
    return (count);
  }
