#include "main.h"
#include <stdlib.h>

/**
 * count - start of ptogram
 * @s: string input
 * Return: 0
 */

int count(char *s)
{
	int i, j, k;

	j = 0;
	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			k = 0;
		else if (k == 0)
		{
			k = 1;
			j++;
		}
	}
	return (j);
}
/**
 * strtow - splits a sting into words
 * @str: string input
 * Return: 0
 */

char **strtow(char *str)
{
	char **start, *temp;
	int i, k = 0, strlen = 0, wordcount, c = 0, begin, stop;

	while (*(str + strlen))
		strlen++;
	wordcount = count(str);
	if (wordcount == 0)
		return (NULL);
	start = (char **) malloc(sizeof(char *) * (wordcount + 1));
	if (start == NULL)
		return (NULL);
	for (i = 0; i <= strlen; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				stop = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (begin < stop)
					*temp++ = str[begin++];
				*temp = '\0';
				start[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = i;
	}
	start[k] = NULL;
	return (start);
}
