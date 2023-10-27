#include "main.h"

/**
 * wildcmp - function that call the recursive function
 * @s1: pointer to string one
 * @s2: pointer to string two
 * Return: Always 0
 */

int recurs(char *s1, char *s2);

int wildcmp(char *s1, char *s2)
{
	return (recurs(s1, s2));
}

/**
 * recurs - used to check if strings are identical
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: Always 0
 */

int recurs(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		return (recurs(s1, s2 + 1) || (*s1 && recurs(s1 + 1, s2)));
	}
	if (*s1 == *s2 || *s2 == '?')
	{
		return (recurs(s1 + 1, s2 + 1));
	}
	return (0);
}
