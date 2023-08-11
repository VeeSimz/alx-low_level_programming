#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - assign random number to variable
 *
 *  Description: 'the program assignsrandon numbers to variable'
 *
 *  Printf: outputs result
 *
 *  Return: always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive");
	} else if (n == 0)
	{
		printf("is zero");
	} else
	{
		printf("is negative");
	}
	return (0);
}