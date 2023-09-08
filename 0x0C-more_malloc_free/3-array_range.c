#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr;
	int n = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[n] = min;
		n++;
		min++;
	}
	return (arr);
}
