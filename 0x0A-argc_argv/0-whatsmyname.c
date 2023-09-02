#include <stdio.h>
/**
 * main - entry point to the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[0]);
	}
	return (0);
}
