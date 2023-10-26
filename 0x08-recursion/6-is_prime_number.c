#include "main.h"

/**
 * foo - helper to the function prototype
 * @n: number to be checked
 * @div: number to be divided
 * Return: Always 0
 */

int foo(int n, int div)
{
	if (n <= 1)
	{
		return (0);
	}
	if (div == 1)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (foo(n, div - 1));
}
/**
 * is_prime_number - used to check if a number is a prime number
 * @n: stores the integer
 * Return: Always 0
 */

int is_prime_number(int n)
{
	return (foo(n, n - 1));
}
