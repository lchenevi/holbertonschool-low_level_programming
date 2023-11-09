#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - creates array of chars
 * @b: checked
 * Return: Returns a pointer to the array, or NULL if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
