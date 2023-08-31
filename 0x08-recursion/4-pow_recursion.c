#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returns value of integers and their powers
 * @x: integer
 * @y: power
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int res = pow(x, y);

	if (y < 0)
		return (-1);

	else
		_pow_recursion(x, y);
		return (res);
}
