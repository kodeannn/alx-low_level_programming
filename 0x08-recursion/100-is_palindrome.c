#include "main.h"
#include <string.h>

/**
 * is_pal - a function that checks if a string is a palindrome
 * @s: pointer to the string
 * @beg: Start of a string
 * @end: where the string ends
 * Return: Always 0
 */

int is_pal(char *s, int beg, int end)
{
	if (beg >= end)
	{
		return (1);
	}

	if (s[beg] == s[end])
	{
		return (is_pal(s, beg + 1, end - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - used to call the is_pal function
 * @s: pointer to the string
 * Return: Always 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	return (is_pal(s, 0, len - 1));
}
