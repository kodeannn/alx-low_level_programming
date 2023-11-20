#include "main.h"
#include <stdlib.h>

/**
 * array_range - function used to create an array of integers
 * @min: minmum integer entered
 * @max: maximum integer entered
 * Return: pointer to the array of integers
 */

int *array_range(int min, int max)
{
	int *arr;
	int size;
	int j;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < size; ++j)
	{
		arr[j] = min + j;
	}

	return (arr);
}
