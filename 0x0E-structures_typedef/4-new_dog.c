#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - used to return the length of a string
 * @s: string whose length will be measured
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * _strcpy - used to copy the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int ist, k;

	ist = 0;

	while (src[ist] != '\0')
	{
		ist++;
	}
	for (k = 0; k < ist; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}

/**
 * new_dog - used to create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer  to the new dog, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int ist1, ist2;

	ist1 = _strlen(name);
	ist2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (ist1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ist2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
