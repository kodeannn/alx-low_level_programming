#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * stringlength - used to calculate the length of a string
 * @str: string to be calculated
 * Return: length of string
 */

size_t stringlength(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * new_dog - function used to create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: who owns the dog
 * Return: newly created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	size_t namelength, ownerlength, i;
	dog_t *newdog;

	namelength = stringlength(name);
	ownerlength = stringlength(owner);

	newdog = (dog_t *)malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = (char *)malloc((namelength + 1) * sizeof(char));
	newdog->owner = (char *)malloc((ownerlength + 1) * sizeof(char));

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	for (i = 0; i <= ownerlength; i++)
	{
		newdog->owner[i] = owner[i];
	}

	for (i = 0; i <= namelength; i++)
	{
		newdog->name[i] = name[i];
	}

	newdog->age = age;

	return (newdog);
}
