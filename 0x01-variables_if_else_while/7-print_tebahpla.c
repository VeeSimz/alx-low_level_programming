#include <stdio.h>
/**
 * main - entry point to the program
 *
 * Return: always 0
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
