#include "main.h"

/**
 * jack_bauer -  to print every minutes in 24 hours
 * Description: as above
 * Return: 0
 */

void jack_bauer(void)
{
	int i = 0;
	int j;

	while (i < 24)
	{
		j = 0;

		while (j <= 59)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');

			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			j++;
			_putchar('\n');
		}
		i++;
	}
}
