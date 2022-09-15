#include "main.h"

/**
 * more_numbers - more numbers
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 10)
	{
		j = 0;

		while (j <= 14)
		{
			_putchar(j + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
