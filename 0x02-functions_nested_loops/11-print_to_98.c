#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers from 0 to 98
 *
 * @j: first number
 *
 * Return: nothing
 */
void print_to_98(int j)
{
	if (j <= 98)
	{
		for (j = 0; j <= 97; j++)
			printf("%d, ", j);
	}
	else
		for (j = 0; j > 98; j--)
			printf("%d, ", j);
	printf("98\n");
}
