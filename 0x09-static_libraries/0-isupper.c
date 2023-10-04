#include "main.h"

/**
 * _isupper - checks if a letter is in uppercase
 * @c: character to be checked
 * Return: if uppercase return 1, else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

