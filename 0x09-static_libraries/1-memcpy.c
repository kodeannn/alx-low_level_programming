#include "main.h"

/**
 * _memcpy - a function used to copy a memory area
 * @dest: where the memory copied is stored
 * @src: where the memory is copied
 * @n: number of bytes
 * Return: the copied memory with n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int q = 0;
	int d = n;

	for (; q < d; q++)
	{
		dest[q] = src[q];
		n--;
	}
	return (dest);
}
