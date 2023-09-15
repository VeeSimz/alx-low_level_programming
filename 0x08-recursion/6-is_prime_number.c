#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns a prime number
 * @n: number
 * Return: 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks for prime numbers
 * @n: number
 * @i: iteration num
 * Return: 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
