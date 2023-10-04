#include "main.h"
#include <stdio.h>

/**
 * main - used to print all arguments it receives
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int s;

	for (s = 0; s < argc; s++)
	{
		printf("%s\n", argv[s]);
	}
	return (0);
}
