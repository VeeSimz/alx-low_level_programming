#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: always 0
 */
int main(void)
{
	int i = 1, j = 2, k, n;

	for (i = 1; i <= 50; i++)
	{
		n = j + i;
		printf("%d\n", k);
		j = k;
		k = n;
	}
	return (0);
}
