#include "main.h"

/**
 * char *_strcpy - used to copy the string pointed to by src
 * @dest: where to copy
 * @src: from where to copy
 * Return: value of string copied
 */

char *_strcpy(char *dest, char *src)
{
	int q = 0;
	int w = 0;

	while (*(src + q) != '\0')
	{
		q++;
	}
	for ( ; w < q ; w++)
	{
		dest[w] = src[w];
	}
	dest[q] = '\0';
	return (dest);
}
