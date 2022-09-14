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
		j = 1;

		_putchar(48);

		while (j <= 9)
		{
			prod = i * j;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);

			j++;
		}
		_putchar('\n');
		i++;
	}
}
