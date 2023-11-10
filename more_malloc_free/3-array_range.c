#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates array of chars
 * @min: checked
 * @max: checked
 * Return: Returns a pointer to the array, or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *new_array;
	unsigned int number, i;

	if (min > max)
		return (NULL);

	/*Calculer le nombre d'éléments dans l'intervalle*/
	number = max - min + 1;
	/*Allouer de la mémoire pour le tableau*/
	new_array = malloc(number * sizeof(int));
	if (new_array == NULL)
		return (NULL);

	/*Remplir le tableau avec les valeurs de min à max*/
	for (i = 0; i < number; i++)
		new_array[i] = min + i;

	return (new_array);
}
