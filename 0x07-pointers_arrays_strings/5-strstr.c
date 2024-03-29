#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: search string
 * @needle: occurence of a substring
 * Return: pointer to a substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
