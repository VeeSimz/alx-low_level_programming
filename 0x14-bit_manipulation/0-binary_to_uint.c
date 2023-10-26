#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to astring of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		num = 2 * num + (b[i] - '0');
	}
	return (num);
}
