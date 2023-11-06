#include "main.h"
#include <stdio.h>

/**
 * mai - beginning of function
 * @argc: number of arguments
 * @argv: pointer to an array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
