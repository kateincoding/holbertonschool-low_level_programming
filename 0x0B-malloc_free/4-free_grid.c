#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid
 * @grid: grid to free
 * @height:  number of rows of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
