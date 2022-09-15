#include "main.h"

/**
 * print_diagonal - print
 * @n: is the number
 * Return: void
 */

void print_diagonal(int n)
{
	int posn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (posn = 1; posn <= n; ++posn)
		{
			for (space = 1; space <= posn; ++space)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
