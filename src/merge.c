/*
** merge.c for ok in /home/alexandre/Documents/tek-1/pushswap_test/intermediate-tests/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Fri Nov 25 15:43:13 2016 Alexandre Chamard-bois
** Last update Tue Oct 17 11:37:32 2017 Alexandre Chamard-bois
*/

#include "my.h"

void 		loop_write(t_array *array)
{
	int 	i = 0;
	int 	j;
	int 	k;

	while (i < MID_ARRAY) {
		j = 0;
		k = array->nb[i][0];
		while (j < k) {
			write(1, " pb", 3);
			j++;
		}
		i++;
	}
}

int 		*merge(int *array1, int *array2)
{
	int 	*merged_array;

	if (!(merged_array = malloc(sizeof(int) * (SIZE_1 + SIZE_2 + 1))))
	return (NULL);
	merged_array[0] = array1[0] + array2[0];
	while (array1[0] || array2[0]) {
		if ((SIZE_1 > 0 && !SIZE_2) ||
		(array1[SIZE_1] >= array2[SIZE_2] &&
			SIZE_1 > 0 && SIZE_2 > 0)) {
			write(1, " rra", 4);
			merged_array[SIZE_1 + SIZE_2] = array1[SIZE_1];
			SIZE_1--;
		}
		else if ((!SIZE_1 && SIZE_2 > 0) ||
		(array1[SIZE_1] < array2[SIZE_2] &&
			SIZE_1 > 0 && SIZE_2 > 0)) {
			write(1, " pa", 3);
			merged_array[SIZE_1 + SIZE_2] = array2[SIZE_2];
			SIZE_2--;
		}
	}
	return (merged_array);
}

void decr(int *i, int *j)
{
	(*i)--;
	(*j)--;
}

void free_array(t_array *array)
{
	int i = 0;

	while (i < array->nb_array) {
		free(array->nb[i]);
		i++;
	}
	free(array->nb);
}

int **lets_merge(t_array *array)
{
	int **new_array;
	int i;
	int j;

	if (!(new_array = malloc(sizeof(int *) * MID_ARRAY)))
	return (NULL);
	array->nb_new_array = MID_ARRAY;
	loop_write(array);
	i = MID_ARRAY - 1;
	j = array->nb_array - 1;
	while (j >= MID_ARRAY) {
		if (!(new_array[i] = merge(array->nb[j], array->nb[i])))
		return (NULL);
		decr(&i, &j);
	}
	if (!i) {
		if (!(new_array[i] = merge(new_array[MID_ARRAY - 1], array->nb[i])))
		return (NULL);
		free(new_array[MID_ARRAY - 1]);
		array->nb_new_array--;
	}
	free_array(array);
	return (new_array);
}
