#include "main.h"

/**
 * _strlen - should return length of the string
 * @s: the string
 * Return: length of string
 */

int _strlen(char *s)
{
	int tall = 0;

	while (*s != '\0')
	{
		tall++;
		s++;
	}
	return (tall);
}
