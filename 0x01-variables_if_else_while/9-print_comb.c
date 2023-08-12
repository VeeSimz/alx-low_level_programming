#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == 9)
		{
			break;
		}
		putchar(i);
		if (i + 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

