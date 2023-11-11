#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - function used to combine two strings
 * @s1: pointer to the string to be cmbined
 * @s2: pointer to the string to be combined
 * Return: The combined string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *concat = (char *)malloc(len1 + len2 + 1);

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}


	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
