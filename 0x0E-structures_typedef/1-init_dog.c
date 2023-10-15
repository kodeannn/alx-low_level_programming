#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - used to initialize a variable of type struct dog
 * @d: is a pointer to struct dog to be initialized
 * @name: name to be initialized
 * @age: age to be initialized
 * @owner: ownner to be initialized
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
