#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - entry point to the program
 * _putchar - outputs the value of  variable alph
 * Return: always 0 (Success)
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
