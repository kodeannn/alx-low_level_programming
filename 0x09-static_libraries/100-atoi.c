#include "main.h"

/**
 * _atoi -used to convert a string into an integer
 * @s: string to be used in the program
 * Return: the integer
 */

int _atoi(char *s)
{
	int ist = 1, d = 0;
	unsigned int sti = 0;

	while (!(s[d] <= '9' && s[d] >= '0')  && s[d] != '\0')
	{
		if (s[d] == '-')
			ist *= -1;
		d++;
	}
	while (s[d] <= '9' && (s[d] >= '0' && s[d] != '\0'))
	{
		sti = (sti * 10) + (s[d] - '0');
		d++;
	}
	sti *= ist;
	return (sti);
}
