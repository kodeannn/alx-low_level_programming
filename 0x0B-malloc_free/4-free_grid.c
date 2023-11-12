#include <stdlib.h>
#include "main.h"

/**
 * free_grid - used to free a two dimensional grid
 * @grid: the grid to be freed
 * @height: height of the grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}

	free(grid);
}
