#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - copies a string into another
 * @width: checked
 * @height: checked
 * Return: Returns the string
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int index, hindex;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (index = 0; index < height; index++)
	{
		grid[index] = malloc(width * sizeof(int));
		if (grid[index] == NULL)
		{
			for (hindex = 0; hindex < index; hindex++)
				free (grid[hindex]);
			free (grid);
			return (NULL);
		}
		for (hindex = 0; hindex < width; hindex++)
			grid[index][hindex] = 0;
	}
	return (grid);
}
