#include <stdio.h>
#include "dog.h"

/**
 * init_dog - used to initialize the structure struct dog
 * @d: a pointer to the structure struct dog
 * @name: name of the dog
 * @age: age pf the dog
 * @owner: who owns the dog
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
