#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, strlen;

	while (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			strlen++;
	}
	strlen += ac;
	str = malloc(sizeof(char) * strlen + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (str[k] == '\0')
		str[k++] = '\n';
	}
	return (str);
}
