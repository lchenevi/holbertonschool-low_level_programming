#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of chars
 * @size: the size of the memory to print
 * @c: input char
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *tableau;
	unsigned int index;

	index = 0;
	if (size == 0)
		return (NULL);

	tableau = malloc(size * sizeof(c));
	if (tableau == NULL)
		return (NULL);
	while (index < size)
	{
		tableau[index] = c;
		index++;
	}
	return (tableau);
}
