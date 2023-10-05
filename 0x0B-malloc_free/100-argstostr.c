#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int o, m, t = 0, p = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (o = 0; o < ac; o++)
	{
		for (m = 0; av[o][m]; m++)
			p++;
	}
	p += ac;
	str = malloc(sizeof(char) * p + 1);

	if (str == NULL)
		return (NULL);

	for (o = 0; o < ac; o++)
	{
		for (m = 0; av[o][m]; m++)
		{
			str[t] = av[o][m];
			t++;
		}
		if (str[t] == '\0')
		{
			str[t++] = '\n';
		}
	}
	return (str);
}
