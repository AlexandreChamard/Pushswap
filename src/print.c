/*
** print.c for ok in /home/alexandre/Documents/tek-1/CPE_2016_pushswap_bootstrap/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sun Nov 20 18:52:44 2016 Alexandre Chamard-bois
** Last update Tue Oct 17 11:38:51 2017 Alexandre Chamard-bois
*/

#include "my.h"

void print_array(int *array, int size)
{
	int i = 0;

	my_printf("array:  ");
	while (i < size) {
		my_printf("%d ", array[i]);
		i++;
	}
	my_printf("\n");
}

void print_double_array(t_array array)
{
	int i = 0;
	int j;

	while (i < array.nb_array) {
		j = 0;
		while (j <= array.nb[i][0]) {
			my_printf("%d ", array.nb[i][j]);
			j++;
		}
		my_printf("\n");
		i++;
	}
	my_printf("nb_array: %d, size_last: %d\n",
		array.nb_array, array.size_last);
}
