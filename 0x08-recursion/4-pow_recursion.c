#include "main.h"

/**
 * _pow_recursion - returns value of integers and their powers
 * @x: integer
 * @y: power
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
