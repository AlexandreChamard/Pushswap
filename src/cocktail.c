/*
** push_swap.c for ok in /home/alexandre/Documents/tek-1/CPE_2016_Pushswap/
**
** Made by John Doe
** Login   <login_x@epitech.eu>
**
** Started on  Thu Nov 10 10:01:05 2016 John Doe
** Last update Tue Oct 17 11:39:30 2017 Alexandre Chamard-bois
*/

#include "my.h"

void swap(int *array, int i)
{
	int j = array[i];

	array[i] = array[i + 1];
	array[i + 1] = j;
	write(1, " sa", 3);
}

int verification(int *array)
{
	int i = 1;

	while (i < array[0]) {
		if (array[i + 1] < array[i])
		return (1);
		i++;
	}
	return (0);
}

void cocktail(int *array, int i)
{
	while (i < array[0] - 1) {
		if (array[i] > array[i + 1])
		swap(array, i);
		i++;
		write(1, " ra", 3);
	}
	while (verification(array) == 1) {
		while (i > 1) {
			if (array[i] > array[i + 1])
			swap(array, i);
			i--;
			write(1, " rra", 4);
		}
		while (i < array[0] - 1) {
			if (array[i] > array[i + 1])
			swap(array, i);
			i++;
			write(1, " ra", 3);
		}
	}
}
