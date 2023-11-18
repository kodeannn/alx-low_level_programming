#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of values int he array
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int totalsize = 0;
	char *ptr;
	int j = 0;

	if (nmemb == 0 && size == 0)
		return (NULL);

	totalsize = nmemb * size;
	ptr = malloc(totalsize);

	if (ptr == NULL)
		return (NULL);

	while (j < totalsize)
	{
		ptr[j] = 0;
		j++;
	}

	free(ptr);
	return (ptr);
}
