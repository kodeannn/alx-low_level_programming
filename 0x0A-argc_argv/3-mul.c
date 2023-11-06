#include "main.h"
#include <stdio.h>

/**
 * _atoi - used to convert a string to an integer
 * @s: string to be converted to an integer
 * Return: the integer to be converted from the string
 */

int _atoi(char *s)
{
	int j, e, m, ist, g, num;

	j = 0;
	e = 0;
	m = 0;
	ist = 0;
	g = 0;
	num = 0;

	while (s[ist] != '\0')
		ist++;
	while (j < ist && g == 0)
	{
		if (s[j] == '-')
			e++;

		if (s[j] >= '0' && s[j] <= '9')
		{
			num = s[j] - '0';
			if (e % 2)
				num = -num;
			m = m * 10 + num;
			g = 1;
			if (s[j + 1] < '0' || s[j + 1] > '0')
				break;
			g = 0;
		}
		j++;
	}
	if (g == 0)
		return (0);
	return (m);
}

/**
 * main - used to multiply 2 numbers
 * @argc: no. of arguments
 * @argv: a pointer to an array of arguments
 * Return: 0 success, 1 error
 */

int main(int argc, char *argv[])
{
	int equal, dig1, dig2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	dig1 = _atoi(argv[1]);
	dig2 = _atoi(argv[2]);
	equal = dig1 * dig2;
	printf("%d\n", equal);

	return (0);
}
