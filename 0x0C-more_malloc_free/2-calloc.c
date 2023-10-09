#include <stdlib.h>
#include "main.h"

/**
 * *_memset - used to fill the memory with a constat byte
 * @s: the memory area to be filled
 * @b: character to e copied
 * @n: number of times b will be copied
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}

/**
 * *_calloc - used to allocate memeory for an array
 * @nmemb: the number of elements in the array
 * @size: actual size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ist;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ist = malloc(size * nmemb);

	if (ist == NULL)
		return (NULL);
	_memset(ist, 0, nmemb * size);
	return (ist);
}
