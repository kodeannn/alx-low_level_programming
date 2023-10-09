#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - used to allocate memory using the malloc
 * @b: this is the number of bytes to be allocated
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *sit;

	sit = malloc(b);

	if (sit == NULL)
		exit(98);
	return (sit);
}
