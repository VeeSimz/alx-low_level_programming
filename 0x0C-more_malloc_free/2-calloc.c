#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: array of elements
 * @size: size of array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = calloc(nmemb, size);
	if (arr == NULL)
		return (NULL);
	else
		return (arr);
}
