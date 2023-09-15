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
		if (stringprint == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(stringprint, char*));
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(stringprint);
}
