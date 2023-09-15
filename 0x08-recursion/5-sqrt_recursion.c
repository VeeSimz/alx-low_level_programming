#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns natural square root of an number
 * @n: number
 * Return: square root
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates square root
 * @n: base number
 * @i: iteration number
 * Return: square root
 */
int _sqrt(int n, int i)
{
	int calc  = i * i;

	if (calc > n)
		return (-1);
	else if (calc == n)
		return (i);
	return (_sqrt(n, i + 1));
}
