#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @i: integer to print from
 *
 * Return: value of last digit
 */
int print_last_digit(int i)
{
	int j;

	if (i < 0)
		i = -i;
		j = i % 10;
	if (j < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
