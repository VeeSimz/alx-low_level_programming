#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string input
 * @c: character
 * Return: c
 */
char *_strchr(char *s, char c)
{
	while (*s !=  '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
