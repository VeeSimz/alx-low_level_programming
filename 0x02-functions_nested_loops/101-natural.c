#include <stdio.h>
/**
 * main - computes and prints the sum of multiples of 3 or 5 below 1024
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int times3, times5, sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			times3 = times3 + i;
		} else if ((i % 5) == 0)
		{
			times5 = times5 + i;
		}
	}
	sum = times3 + times5;
	printf("%lu\n", sum);
	return (0);
}
