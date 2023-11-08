#include "main.h"
#include <stdlib.h>

/**
 * create_array - used 2 create an array of char & init it with a specific char
 * @size: stores the size of the array
 * @c: stores the character the array will be initialized to
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
