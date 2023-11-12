#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - used to return a pointer to a 2 dimensional array
 * @width: width of the grid
 * @height: height of the grid
 * Return: nothing
 */

int **alloc_grid(int width, int height)
{
	int j, k, l, m;
	int **b;

	if (width <= 0 || height <= 0)
		return (NULL);

	b = malloc(sizeof(int *) * height);

	if (b == NULL)
	{
		free(b);
		return (NULL);
	}

	for (j = 0; j < height; j++)
	{
		b[j] = malloc(sizeof(int) * width);

		if (b[j] == NULL)
		{
			for (k = j; k >= 0; k--)
			{
				free(b[k]);
			}
			free(b);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (m = 0; m < width; m++)
		{
			b[l][m] = 0;
		}
	}
	return (b);
}
