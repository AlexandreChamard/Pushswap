/*
** double_tab_sort.c for ok in /home/alexandre/Documents/tek-1/pushswap_test/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Wed Nov 23 15:05:59 2016 Alexandre Chamard-bois
** Last update Tue Oct 17 11:46:08 2017 Alexandre Chamard-bois
*/

#include "my.h"

void first_swap(int *array)
{
	int j = array[1];

	array[1] = array[2];
	array[2] = j;
	write(1, "sa", 2);
}

int verif(t_array array)
{
	int i = 0;

	while (i < array.nb_array) {
		if (i && array.nb[i][1] < array.nb[i - 1][3] &&
			array.nb[i][0] >= 1)
		return (1);
		if (array.nb[i][1] > array.nb[i][2] && array.nb[i][0] >= 2)
		return (1);
		if (array.nb[i][2] > array.nb[i][3] && array.nb[i][0] >= 3)
		return (1);
		i++;
	}
	return (0);
}

int **create_array(t_array *array, char **av)
{
	int **new_array;
	int i = 0;
	int j;

	if (!(new_array = malloc(sizeof(int *) * (array->nb_array))))
	return (NULL);
	while (i < array->nb_array) {
		if (!(new_array[i] = malloc(sizeof(int) *
		(C_SIZE(array->nb_array - i - 1, array->size_last) + 1))))
		return (NULL);
		new_array[i][0] = C_SIZE(array->nb_array - i - 1, array->size_last);
		j = 1;
		while (j < C_SIZE(array->nb_array - i - 1, array->size_last) + 1)
		{
			new_array[i][j] = my_getnbr(av[i * SIZE + j]);
			j++;
		}
		i++;
	}
	return (new_array);
}

void sort_with_a_cocktail(t_array *array)
{
	int i = 0;

	first_swap(array->nb[i]);
	while (i < array->nb_array) {
		if (array->nb[i][0] == 2) {
			if (array->nb[i][1] > array->nb[i][2])
			swap(array->nb[i], 1);
		}
		else {
			cocktail(array->nb[i], 1);
		}
		if (array->nb[i][0] == 1) {
			write(1, " ra", 3);
		} else {
			write(1, " ra ra", 6);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	t_array  array;

	if (ac < 1)
	return (84);
	array.nb_array = (ac - 1) / SIZE;
	array.size_last = (ac - 1) % SIZE;
	if (array.size_last > 0)
	array.nb_array++;
	array.nb = create_array(&array, av);
	if (verif(array) != 0) {
		sort_with_a_cocktail(&array);
		while (array.nb_array > 1) {
			if (!(array.nb = lets_merge(&array)))
			return (84);
			array.nb_array = array.nb_new_array;
		}
	}
	write(1, "\n", 1);
	free_array(&array);
	return (0);
}
