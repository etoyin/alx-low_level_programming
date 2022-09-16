#include "main.h"
#include <stdio.h>

/**
 * print_triangle - main block
 * Description: print triangle
 * Return: void
 */

void print_triangle(int size)
{
	int counter = 1;
	int i = 1;
	int j;

	while (i <= size)
	{
		j = 1;

		while (j <= size)
		{
			if (j <= (size - counter))
				_putchar(' ');
			else
				_putchar('#');
			j++;
		}
		counter++;
		i++;
	}
}
