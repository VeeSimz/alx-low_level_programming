#include <stdio.h>
/**
 * main - prints to Fibonacci numbers starting from 1 and 2
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	unsigned long int j, k, n, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		n = j + k;
		j = k;
		k = n;
	}
	printf("%ld\n", sum);
	return (0);
}
