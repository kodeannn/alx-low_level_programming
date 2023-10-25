#include "main.h"

/**
 * _puts_recursion - function used to print a string
 * @s: pointer to a string of characters
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
