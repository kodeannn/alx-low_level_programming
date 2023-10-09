#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - used to reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *sit;
	char *sit2;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	sit = malloc(new_size);

	if (!ptr)
		return (NULL);
	sit2 = ptr;

	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			sit[j] = sit2[j];
	}

	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			sit[j] = sit2[j];
	}
	free(ptr);
	return (sit);
}
