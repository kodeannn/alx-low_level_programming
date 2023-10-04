#include "main.h"

/**
 * _memset - used to store a specific value to a memory block
 * @s: address of memory that stores the value
 * @b: the specific value
 * @n: number of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
