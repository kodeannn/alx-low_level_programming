#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - used to iterate over each element of the provided array
 * @array: array to be iterated on
 * @size: size of the array
 * @action: pointer to functions
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
