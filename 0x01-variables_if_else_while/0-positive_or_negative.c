#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
* more headers goes here
* betty style doc for function main goes there
*/
int main(void)/* main - A c program that assign a random number*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d\n is positive", n);
	}
	else if (n == 0)
	{
		printf("%d\n is zero", n);
	}
	else
	{
		printf("%d\n is negative", n);
	}
	return (0);
}
