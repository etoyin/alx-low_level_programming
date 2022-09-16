#include "main.h"

/**
 * print_square - function to print square
 * @size: size input
 * Return: void
 */

void print_square(int size)
{
	int i = 0;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			j = 0;

			while (j < size)
			{
				_putchar(35);
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
