#include "main.h"
/**
 * _pow_recursion - returns value of integers and their powers
 * @x: integer
 * @y: power
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int res = x * y;

	if (y < 0)
		return (-1);

	else
		return (res);
}
