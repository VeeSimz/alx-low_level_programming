#include "main.h"

/**
 * argstostr - concatenates arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *str;

	str = argstostr(ac, av);
	if (str == NULL)
		return (NULL);
	printf("%s", str);
	free(str);
	return (str);
}
