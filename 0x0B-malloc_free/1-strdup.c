#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns the pointer to a duplicate set of chars
 * @str: pointer to the string of chars
 * Return: the duplicate string
 */

char *_strdup(char *str)
{
	int length = 0;
	char *duplicate;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}

	duplicate[length] = '\0';

	return (duplicate);
}
