#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int dig, k, equal;
	int silver[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	dig = atoi(argv[1]);
	equal = 0;

	if (dig < 0)
	{
		printf("0\n");
		return (0);
	}
	for (k = 0; k < 5 && dig >= 0; k++)
	{
		while (dig >= silver[k])
		{
			equal++;
			dig -= silver[k];
		}
	}
	printf("%d\n", equal);
	return (0);
}
