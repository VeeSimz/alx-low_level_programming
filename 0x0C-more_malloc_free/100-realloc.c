#include "main.h"

/**
 * *_realloc - reallocates a block of memory
 * @old_size: old memory size
 * @new_size: new memory size
 * @ptr: pointer to allocated memory
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int n;
	char *new;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (n = 0; n < old_size && n < new_size; n++)
	{
		new[n] = ((char *) ptr)[n];
	}
	free(ptr);
	return (new);
}
