#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: always 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph < 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}
	putchar('\n');
	return (0);
}
