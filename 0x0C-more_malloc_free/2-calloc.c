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
	char *ptr;
	size_t t;

	if (nmemb == 0 && size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (t = 0; t < (nmemb * size); t++)
		ptr[t] = 0;
	return (ptr);
}
