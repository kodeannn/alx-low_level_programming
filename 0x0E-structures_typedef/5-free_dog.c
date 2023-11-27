#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function ised to free dogs
 * @d: pointer to the structure
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
