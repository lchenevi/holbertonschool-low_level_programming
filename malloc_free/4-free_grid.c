#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - copies a string into another
 * @grid: checked
 * @height: checked
 * Return: Returns the string
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
