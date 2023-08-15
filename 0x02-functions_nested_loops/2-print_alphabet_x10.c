#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet onto the screen
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char alph;
	int a;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		for (a = 0; a <= 9; a++)
		{
			_putchar(alph);
		}
	_putchar('\n');
	}
}
