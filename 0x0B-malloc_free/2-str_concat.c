#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - combines 2 strings of any size
 * @s1: string 1 to combine
 * @s2: string 2 to combine
 * Return: the 2 strings combined
 */

char *str_concat(char *s1, char *s2)
{
	int j = 0, k = 0, m = 0, n = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[j])
		j++;

	while (s2[k])
		k++;

	n = j + k;
	a = malloc((sizeof(char) * n) + 1);

	if (a == NULL)
		return (NULL);

	k = 0;

	while (m < n)
	{
		if (m <= j)
			a[m] = s1[m];
		if (m >= j)
		{
			a[m] = s2[k];
			k++;
		}
		m++;
	}
	a[m] = '\0';
	return (a);
}
