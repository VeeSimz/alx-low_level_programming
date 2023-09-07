#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the amount of coins for change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins;
	int cents = 0;

	if (argc != 2)
		printf("Error\n");
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;

		if ((cents - 25) >= 0)
		{
		cents -= 25;
		continue;
		}
		else if ((cents - 10) >= 0)
		{
		cents -= 10;
		continue;
		}
		else if ((cents - 5) >= 0)
		{
		cents -= 5;
		continue;
		}
		else if ((cents - 2) >= 0)
		{
		cents -= 2;
		continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
