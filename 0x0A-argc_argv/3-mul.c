#include "main.h"
#include <stdio.h>

/**
 * _atoi - used to convert a string to an integer
 * @s: string that is to be converted
 * Return: the int to be converted from the string
 *
 */

int _atoi(char *s)
{
	int q, w, e, ist, r, num;

	q = 0;
	w = 0;
	e = 0;
	ist = 0;
	r = 0;
	num = 0;

	while (s[ist] != '\0')
		ist++;
	while (q < ist && r == 0)
	{
		if (s[q] == '-')
			++w;
		if (s[q] >= '0' && s[q] <= '9')
		{
			num = s[q] - '0';
			if (w % 2)
				num = -num;
			e = e * 10 + num;
			r = 1;
			if (s[q + 1] < '0' || s[q + 1] > '9')
				break;
			r = 0;
		}
		q++;
	}
	if (r == 0)
		return (0);
	return (e);
}

/**
 * main - used to multiply two numbers
 * @argv: array of arguments
 * @argc: number of arguments
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
