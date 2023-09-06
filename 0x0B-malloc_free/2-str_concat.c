#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: pointer to space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int strlen1 = 0;
	int strlen2 = 0;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		strlen1++;
	for (i = 0; s2[i] != '\0'; i++)
		strlen2++;
	res = malloc(sizeof(char) * (strlen1 + strlen2) + 1);
	if (res == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		res[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		res[strlen1 + i] = s2[i];
	return (res);
}
