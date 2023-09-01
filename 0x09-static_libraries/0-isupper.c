#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - checks if the character is uppercase
 * @c: type of integer
 * Return: 1 if c is uppercase else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

