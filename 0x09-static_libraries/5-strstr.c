#include "main.h"

/**
 * _strstr - beginnig of program
 * @haystalk: value to input
 * @needle: value to input
 * Return: Always 0
 */

char *_strstr(char *haystalk, char *needle)
{
	for (; *haystalk != '\0'; haystalk++)
	{
		char *t = haystalk;
		char *r = needle;

		while (*t == *r && *r != '\0')
		{
			t++;
			r++;
		}
		if (*r == '\0')
			return (haystalk);
	}
	return (0);
}
