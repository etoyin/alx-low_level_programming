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
			if (i < 10)
				_putchar('0');
			_putchar(i);
			_putchar(':');

			if (j < 10)
				_putchar('0');
			_putchar(j);
			j++;
			_putchar('\n');
		}
		i++;
	}
	return (0);
}
