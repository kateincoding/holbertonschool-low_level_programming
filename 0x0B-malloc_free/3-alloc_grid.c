#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a grid and return a pointer
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to grid , case Null, null
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* row */
	grid = malloc(height * sizeof(int *));
	if (grid == 0)
		return (NULL);

	/*loop for column*/
	for (i = 0; i < height; i++)
	{
		/* size of each row = columns */
		*(grid + i) = malloc(width * sizeof(int));
		/* restriction in cascade for each column */
		if (*(grid + i) == 0)
		{
			for (k = 0; k <= i; k++)
				free(*(grid + k));
			free(grid);
			return (NULL);
		}
		/* loop for each column*/
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
