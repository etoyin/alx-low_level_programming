#include "main.h"

/**
 * times_table - 9 times table
 * Description: as above
 */

void times_table(void)
{
	int i = 0;
	int j, prod;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			prod = i * j;

			if (prod >= 10)
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);
			_putchar(',');
			if (prod <= 9)
				_putchar(' ');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
