#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function used to reallocate data to a new pointer
 * @ptr: pointer to a memory block previously allocated using malloc
 * @old_size: size in bytes of the allocatated space for ptr
 * @new_size: new size of memory block in bytes
 * Return: pointer to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	size_t size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	ptr2 = malloc(new_size);

	if (ptr2 == NULL)
	{
		return (NULL);
	}

	size = (old_size < new_size) ? old_size : new_size;

	memcpy(ptr2, ptr, size);

	free(ptr);

	return (ptr2);
}
