#include "main.h"

/**
 * times_table - 9 times table
 * Description: as above
 */

void times_table(void)
{
	int i = 0;
	int j, prod, next_prod1, next_prod2;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			prod = i * j;
			next_prod1 = (i * (j + 1));
			netx_prod2 = ((i + 1) * j);

			if (prod >= 10)
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);

			if (j < 9)
			{
				_putchar(',');
				if ((next_prod1 < 9) || (next_prod2 < 9))
					_putchar(' ');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
