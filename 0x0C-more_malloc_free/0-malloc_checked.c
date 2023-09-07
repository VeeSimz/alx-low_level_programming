#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: variable in memory
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(sizeof(b));
	if (str == NULL)
		exit(98);
	else
		return (str);
}
