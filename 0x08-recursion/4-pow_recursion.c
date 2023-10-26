#include <stdio.h>

/**
 * _pow_recursion - function that returns the value of x raised to the pwr of y
 * @x: value to be raised
 * @y: value that has the power
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
