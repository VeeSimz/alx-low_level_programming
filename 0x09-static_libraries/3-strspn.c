#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: initial segment
 * @accept: source string
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
