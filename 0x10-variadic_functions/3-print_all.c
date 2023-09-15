#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: datatype of input
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list prints;
	int i = 0;
	char *ptr, *comm = "";

	va_start(prints, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", comm, va_arg(prints, int));
				break;
			case 'i':
				printf("%s%d", comm, va_arg(prints, int));
				break;
			case 'f':
				printf("%s%f", comm, va_arg(prints, double));
				break;
			case 's':
				ptr = va_arg(prints, char *);
				if (!ptr)
					ptr = "(nil)";
				printf("%s%s", comm, ptr);
				break;
			default:
				i++;
				continue;
			}
			comm = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(prints);
}
