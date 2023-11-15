#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that joins two strings
 * @s1: first string
 * @s2: second string
 * @n: length of string
 * Return: pointer to the newly combined strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0, k = 0, l = 0, m = 0;
	char *ist;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j])
		j++;

	while (s2[l])
		l++;

	if (n >= l)
		m = j + l;
	else
		m = j + n;

	ist = malloc(sizeof(char) * m + 1);
	if (ist == NULL)
		return (NULL);

	l = 0;
	while (k < m)
	{
		if (k <= j)
			ist[k] = s1[k];
		if (k >= j)
		{
			ist[k] = s2[l];
			l++;
		}
		k++;
	}
	ist[k] = '\0';
	return (ist);
}

