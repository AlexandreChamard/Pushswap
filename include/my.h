/*
** my.h for ok in /home/alexandre/Documents/tek-1/CPE_2016_Pushswap/include/
**
** Made by Alexandre Chamard-bois
** Login   <alexandre.chamard-bois@epitech.eu>
**
** Started on  Sat Nov 26 20:06:08 2016 Alexandre Chamard-bois
** Last update Tue Oct 17 11:08:37 2017 Alexandre Chamard-bois
*/

#ifndef MY_H_
# define  MY_H_

# include <stdlib.h>
# include <unistd.h>

# define C_SIZE(x, y) (((x) > (0) || y == 0) ? (SIZE) : (y))
# define SIZE 3
# define MID_ARRAY (array->nb_array + 1) / 2
# define SIZE_1 array1[0]
# define SIZE_2 array2[0]

typedef struct  s_array
{
	int           **nb;
	int           nb_array;
	int           size_last;
	int           nb_new_array;
}               t_array;

//lib//
int my_getnbr(char *);
int my_printf(char *, ...);

//print.c//
void print_array(int *, int);
void print_double_array(t_array);

//double_tab_sort.c//
int **create_array(t_array *, char **);
void sort_with_a_cocktail(t_array *);
int verif(t_array);
void first_swap(int *);

//coktail.c//
void cocktail(int *, int);
int verification(int *);
void swap(int *, int);

//merge.c//
int **lets_merge(t_array *);
void free_array(t_array *);
void decr(int *, int *);
int *merge(int *, int *);
void loop_write(t_array *);

#endif
