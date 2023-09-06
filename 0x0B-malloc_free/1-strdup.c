#include "main.h"

/**
 * _strdup - contains a copy of the string given as a parameter
 * @str: string
 * Return: pointer to space in memory
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	ptr = malloc(sizeof(char) * count + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);
}
