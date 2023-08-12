#include <stdio.h>
/**
 * main - entry point for the program
 *
 *Return: always 0
 */
int main(void)
{
	char alph;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
