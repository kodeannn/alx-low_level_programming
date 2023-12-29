#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - used to iterate thru an array searching 4 integers
 * @array: array  to be searched
 * @size: number of integers in the array
 * @cmp: pointer to functions that determine an integer
 * Return: index of element returning true
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
		return (j);
	}
	return (-1);
}
