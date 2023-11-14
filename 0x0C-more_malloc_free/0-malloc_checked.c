#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - function used to allocate mem & check if mem allocation 0
 * @b: amount of bytes to allocate
 * Return:pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = (int *)malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
