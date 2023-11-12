#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - used to combine all arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: combined arguments
 */

char *argstostr(int ac, char **av)
{
	int le = 0, j = 0, k = 0, l = 0;
	char *t;

	if (ac == 0 || av == NULL)
	{
		return (NULL);

		while (j < ac)
		{
			while (av[j][k])
			{
				le++;
				k++;
			}
			k = 0;
			j++;
		}
	}
		t = malloc((sizeof(char) * le) + ac + 1);

		j = 0;
		while (av[j])
		{
			while (av[j][k])
			{
				t[l] = av[j][k];
				l++;
				k++;
			}

			t[l] = '\n';

			k = 0;
			l++;
			j++;
		}

		l++;
		t[l] = '\0';
		return (t);
}
