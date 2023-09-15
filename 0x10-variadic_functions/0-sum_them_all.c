#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: input variable
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int res = 0;

	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		res = res + va_arg(sum, int);
	}
	va_end(sum);
	return (res);
}
