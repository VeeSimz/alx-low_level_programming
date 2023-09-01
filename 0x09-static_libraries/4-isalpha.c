#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: input into the program
 *
 * Return: always 1 when c is a letter else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
