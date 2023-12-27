#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that holds the function pointer
 * @f: function pointer
 * @name: name used as an argument
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
