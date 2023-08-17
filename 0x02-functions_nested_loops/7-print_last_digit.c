#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @n: integer to print from
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int j;

	if (n < 0)
		n = -n;
		j = n % 10;
	if (j < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
