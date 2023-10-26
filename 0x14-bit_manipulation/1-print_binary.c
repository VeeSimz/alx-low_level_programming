#include "main.h"

/**
 * print_binary - prints the binary represantation of a number
 * @n: string input
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned int temp;

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;
		if (temp & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
		{
			_putchar('0');
		}
	}
	if (!counter)
		_putchar('0');
}
