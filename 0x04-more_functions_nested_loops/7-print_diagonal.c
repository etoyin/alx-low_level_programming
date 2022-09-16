#include "main.h"

/**
 * print_diagonal - print diagonal lines
 * @n: is the number of times \ should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int posn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		posn = 0;

		while (posn < n)
		{
			space = 0;

			while (space < posn)
			{
				_putchar(' ');
				space++;
			}
			posn++;
			_putchar('\\');
			_putchar('\n');
		}
	}
}
