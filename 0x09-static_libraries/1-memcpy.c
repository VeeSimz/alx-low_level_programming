#include "main.h"
/**
 * _memcpy - copies a memory area
 * @src: source
 * @dest: destination
 * @n: bytes in memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
