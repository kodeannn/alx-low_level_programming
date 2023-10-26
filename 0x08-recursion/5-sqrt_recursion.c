#include <stdio.h>

/**
 * _sqrt_recursion - function used 2 return the natural square root of a number
 * @n: contains the number that should be squared
 * @pit: current guess for the square root
 * Return: Always 0
 */

int sqtrec(int n, int pit);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqtrec(n, 2));
}

/**
 * sqtrec - Helper function to find the square root recursively
 * @n: The number for which to find the square root
 * @pit: The current guess for the square root
 *
 * Return: The integer square root of n.
 */
int sqtrec(int n, int pit)
{
	if (pit * pit == n)
	{
		return (pit);
	}
	else if (pit * pit > n)
	{
		return (-1);
	}
	else
	{
		return (sqtrec(n, pit + 1));
	}
}
