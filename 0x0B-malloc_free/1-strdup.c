#include "main.h"
#include <stdlib.h>

/**
 * _strdup - used to duplicate new memory space location
 * @str: char to be used
 * Return: 0
 */

char *_strdup(char *str)
{
	int b = 0, j = 1;
	char *d;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	d = malloc((sizeof(char) * j) + 1);

	if (d == NULL)
		return (NULL);

	while (b < j)
	{
		d[b] = str[b];
		b++;
	}

	d[b] = '\0';
	return (d);
}
