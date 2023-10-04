#include "main.h"

/**
 * _isalpha - used to look for alphabetic characters
 * @c: var that stores the character to be checked
 * Return: 1 if c is a letter  and 0 if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
