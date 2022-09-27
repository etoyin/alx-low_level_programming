#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - to print the sum of the 2 diagonals
 * 
 * @a: the array
 * @size: the size input
 * 
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	unsigned int i, sum, sum2;

	i = 0;
	sum = 0;
	sum2 = 0;

	while (i < (size * size))
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum2 += a[i];
		i++;
	}
	printf("%d, %d\n", sum, sum2);
}
