#include "main.h"

/**
 * times_table - 9 times table
 * Description: as above
 */

void times_table(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			_putchar((i + 48) * (j + 48));
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
