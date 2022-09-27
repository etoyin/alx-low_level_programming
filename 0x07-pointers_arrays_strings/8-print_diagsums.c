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

	while (i < size)
	{
		sum = sum + a[i];
		sum2 = sum2 + a[size - (i + 1)];
		i++;
	}
	printf("%d, %d\n", sum, sum2);
}
