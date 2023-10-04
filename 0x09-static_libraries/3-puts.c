#include "main.h"

/**
 * _puts - used to print a string to standard output
 * @str: string to be printed to stdout
 * _putchar used to print a new line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
