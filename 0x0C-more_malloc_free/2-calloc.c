#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of values int he array
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int t = 0, j = 0;
	char *ptr;

	if (nmemb == 0 && size == 0)
		return (NULL);

	t = nmemb * size;
	ptr = malloc(t);

	if (ptr == NULL)
		return (NULL);

	while (j < t)
	{
		ptr[j] = 0;
		j++;
	}

	return (ptr);
}
