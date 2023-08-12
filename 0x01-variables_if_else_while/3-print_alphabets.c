#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: always 0
 */
int main(void)
{
	char alph;
	char Alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (Alph = 'A'; Alph <= 'Z'; Alph++)
	{
		putchar(Alph);
	}
	putchar('\n');
	return (0);
}
