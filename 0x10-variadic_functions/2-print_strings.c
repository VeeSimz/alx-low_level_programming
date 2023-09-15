#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints string
 * @separator: string printed between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringprint;
	unsigned int i;

	va_start(stringprint, n);
	for (i = 0; i < n; i++)
	{
		printf("%d",va_arg(stringprint, int));
		if (stringprint == NULL)
		{
			printf("(nil)");
		}
		printf("%s", separator);
	}
	va_end(stringprint);
}
