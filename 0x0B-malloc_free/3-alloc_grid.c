#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **hei;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	hei = malloc(sizeof(int *) * height);
	if (hei == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		hei[a] = malloc(sizeof(int) * width);

		if (hei[a] == NULL)
		{
			for (; a >= 0; a--)
				free(hei[a]);
			free(hei);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			hei[a][b] = 0;
	}
	return (hei);
}
