#include <stdio.h>
#include "dog.h"
#include <float.h>

/**
 * print_dog - function that prints the elements and values of struct dog
 * @d: pointer to structure struct dog
 * Return: Always 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{

	}

	if (d->name == NULL)
	{
		printf("nil");
	}
	printf("Name: %s\n", d->name);

	if (d->age == FLT_MIN)
	{
		printf("nil");
	}
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("nil");
	}
	printf("Owner: %s\n", d->owner);
}
