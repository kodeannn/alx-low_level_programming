#include "main.h"

/**
 * _strncpy - used to copy a string
 * @dest: value to be input
 * @src: value to be input
 * @n: value to be input
 * Return: var dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int u = 0;

	while (u < n && src[u] != '\0')
	{
		dest[u] = src[u];
		u++;
	}
	while (u < n)
	{
		dest[u] = '\0';
		u++;
	}
	return (dest);
}
