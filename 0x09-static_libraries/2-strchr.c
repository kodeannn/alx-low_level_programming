#include "main.h"

/**
 * _strchr - Where the program starts
 * @s: value to be input
 * @c: value to be input
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int f = 0;

	for (; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
			return (&s[f]);
	}
	return (0);
}
