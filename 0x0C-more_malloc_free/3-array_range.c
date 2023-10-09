#include <stdlib.h>
#include "main.h"

/**
 * *array_range - used to create an rray of integers
 * @min: min range of values to be stored
 * @max: max range of values to be stored
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *zet;
	int j, big;

	if (min > max)
		return (NULL);
	big = max - min + 1;
	zet = malloc(sizeof(int) * big);

	if (zet == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		zet[j] = min++;
	return (zet);
}
