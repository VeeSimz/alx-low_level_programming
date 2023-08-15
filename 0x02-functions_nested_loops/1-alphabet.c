#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - entry point to the program
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
