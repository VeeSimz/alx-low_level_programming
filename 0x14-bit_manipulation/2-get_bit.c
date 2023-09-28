#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: string input
 * @index: indexof uniform
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
