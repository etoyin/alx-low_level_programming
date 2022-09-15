#include "main.h"

/**
 * times_table
 * @n: input
 */

void print_times_table(int n)
{
	int i = 0;
	int j, prod;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 1;

			_putchar(48);

			while (j <= n)
			{
				_putchar(',');
				_putchar(' ');

				prod = i * j;

				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (prod <= 99 && prod > 9)
				{
					_putchar(' ');
					_putchar((prod / 10) + 48);
				}
				else
				{
					_putchar((prod / 100) + 48);
					_putchar(((prod / 10) % 10) + 48);
				}
				_putchar((prod % 10) + 48);
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
