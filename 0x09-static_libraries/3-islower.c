#include "main.h"

/**
 * _islower - checks the case of the output
 *
 * @c: value of ouput of the program
 *
 * Return: Always 0 if successful, else 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
