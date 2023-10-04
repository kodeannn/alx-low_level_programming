#include "main.h"

/**
 * _strncat - a function that combines two strings usign n bytes from src
 * @dest: value to be entered
 * @src: value to be entered
 * @n: value to be entered
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int k;
	int m;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[k] = src[m];
		k++;
		m++;
	}
	dest[k] = '\0';
	return (dest);
}
