#include <unistd.h>

/**
 * _putchar - print characters
 * Retur: Always 0
 */

void _ptchar(char c)
{
	write(1, &c, 1);
}
