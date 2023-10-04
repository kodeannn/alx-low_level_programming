#include <unistd.h>

/**
 * _putchar - print characters
 * @c: character to be used
 * Return: Always 0
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
