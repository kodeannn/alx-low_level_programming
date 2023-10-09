#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit -used to check if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 if not
 */

int is_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

/**
 * _strlen -used to  return the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * errors -used to  handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main -used to multiply two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char sit1, *sit2;
	int nel1, nel2, nel, j, over, num1, num2, *equal, b = 0;

	sit1 = argv[1], sit2 = argv[2];
	if (argc != 3 || !is_digit(sit1) || !is_digit(sit2))
		errors();
	nel1 = _strlen(sit1);
	nel2 = _strlen(sit2);
	nel = nel1 + nel2 + 1;
	equal = malloc(sizeof(int) * nel);
	if (!equal)
		return (1);
	for (j = 0; j <= nel1 + nel2; j++)
		equal[j] = 0;
	for (nel1 = nel1 - 1; nel1 >= 0; nel1--)
	{
		num1 = sit1[nel1] - '0';
		over = 0;
		for (nel2 = _strlen(sit2) - 1; nel2 >= 0; nel2--)
		{
			num2 = sit2[nel2] - '0';
			over += equal[nel1 + nel2 + 1] + (num1 * num2);
			equal[nel1 + nel2 + 1] = over % 10;
			over /= 10;
		}
		if (over > 0)
			equal[nel1 + nel2 + 1] += over;
	}
	for (j = 0; j < nel - 1; j++)
	{
		if (equal[j])
			a = 1;
		if (a)
			_putchar(equal[j] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(equal);
	return (0);
}
