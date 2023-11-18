#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of values int he array
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t totalsize = nmemb * size;
	void *ptr;

	if (nmemb == 0 && size == 0)
	{
		return (NULL);
	}

	ptr = malloc(totalsize);

	memset(ptr, 0, size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
