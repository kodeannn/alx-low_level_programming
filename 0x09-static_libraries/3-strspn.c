#include "main.h"

/**
 * _strspn - where the program starts
 * @s: value to input
 * @accept: value to input
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int u = 0;
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
			{
				u++;
				break;
			}
			else if (accept[l + 1] == '\0')
				return (u);
		}
		s++;
	}
	return (u);
}
