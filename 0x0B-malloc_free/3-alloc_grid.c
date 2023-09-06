#include "main.h"

/**
 * alloc_grid - functin returns pointer to 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **res;
	int i, x;

	if (width <= 0 || height <= 0)
		return (NULL);
	res = malloc(sizeof(int *) * height);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		res[i] = malloc(sizeof(int) * width);
		if (res[i] == NULL)
		{
			free(res);
			for (x = 0; x <= height; x++)
				free(res[x]);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			res[i][x] = 0;
	}
	return (res);
}
