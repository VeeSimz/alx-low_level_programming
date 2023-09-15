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
	char *str;

	va_start(stringprint, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(stringprint, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(stringprint);
}
