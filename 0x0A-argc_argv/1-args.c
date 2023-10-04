#include "main.h"
#include <stdio.h>

/**
 * main - used to print number of arguments passed to the program
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
