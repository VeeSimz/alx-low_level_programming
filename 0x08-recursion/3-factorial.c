#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: instances on number
 * Return: 0
 */
int factorial(int n)
{
	if (n == 1)
		return (1);

	else if (n < 0)
		return (-1);

	else
		return (n * factorial(n - 1));
}
