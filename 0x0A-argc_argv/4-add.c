#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	char *ptr;
	unsigned int j;
	unsigned int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			for (j = 0; j < strlen(ptr); j++)
			{
				if (ptr[j] < 48 || ptr[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(ptr);
			ptr++;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
