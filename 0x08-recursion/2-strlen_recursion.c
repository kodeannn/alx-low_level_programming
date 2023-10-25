#include "main.h"

/**
 * _strlen_recursion - function used to count the no. of characters in a string
 * @s: pointer to the string that is to be counted
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
