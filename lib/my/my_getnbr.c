/*
** my_genbr.c for my_getnbr in /home/Alex.Chamardbois/CPool/CPool_Day04
** 
** Made by Alexandre Chamard-bois
** Login   <Alex.Chamardbois@epitech.net>
** 
** Started on  Thu Oct  6 22:28:26 2016 Alexandre Chamard-bois
** Last update Tue Oct 18 16:49:26 2016 Alexandre Chamard-bois
*/

void	nega_or_n(char *str, int *i, int *nega)
{
  *nega = 1;
  while (str[*i] == '-' || str[*i] == '+')
    {
      if (str[*i] == '-')
	*nega = -*nega;
      *i = *i + 1;
    }
}

int	my_getnbr(char *str)
{
  long	nbr_long;
  int	i;
  int	nega;

  i = 0;
  nbr_long = 0;
  nega_or_n(str, &i, &nega);
  while (str[i] <= '9' && str[i] >= '0')
    {
      nbr_long = nbr_long * 10 + str[i] - '0';
      i = i + 1;
    }
  nbr_long = nega * nbr_long;
  if (nbr_long > -2147483648 && nbr_long < 2147483647)
    return (nbr_long);
  return (0);
}
