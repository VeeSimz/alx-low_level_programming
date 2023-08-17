#include <stdio.h>
/**
 * numLength - prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * @num: operand number
 *
 * Return: number of outputs
 */
int numLength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}
