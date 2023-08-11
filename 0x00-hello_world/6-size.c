#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char a;
	int i;
	long int c;
	long long int d;
	float f;

	printf("Size of a char:%b byte(s)\n", sizeof(a));
	printf("Size of an int:%b byte(s)\n", sizeof(i));
	printf("Size of a long int:%b byte(s)\n", sizeof(c));
	printf("Size of a long long int:%b byte(s)\n", sizeof(d));
	printf("Size of a float:%b byte(s)\n", sizeof(f));
	return (0);
}
