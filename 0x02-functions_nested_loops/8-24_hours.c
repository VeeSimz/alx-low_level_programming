#include "main.h"
/**
 * jack_bauer - prints every minute in the life o Jack Bauer
 *
 * timer starts from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int j;
	int i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
