#include "main.h"

/**
 * _strcat - a function that combines two strings
 * @dest: value to be entered
 * @src: value to be entered
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int z;
	int y;

	z = 0;
	while (dest[z] != '\0')
	{
		z++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[z] = src[y];
		z++;
		y++;
	}

	dest[z] = '\0';
	return (dest);
}
