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
	int j = 0, k = 0, l = 0, m = 0;
	char *d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;

	while (s2[k])
		k++;

	m = j + k;
	d = malloc((sizeof(char) * m) + 1);

	if (d == NULL)
		return (NULL);
	k = 0;

	while (l < m)
	{
		if (l <= j)
			d[l] = s1[l];
		if (l >= j)
		{
			d[l] = s2[k];
			k++;
		}
		l++;
	}
	d[l] = '\0';
	return (d);
}
