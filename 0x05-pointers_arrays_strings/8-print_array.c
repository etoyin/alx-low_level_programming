#include <stdio.h>
#include "main.h"

/**
 * print-array - to print n number of elements in array
 * @a: array
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		printf("%d", a[n - 1]);
		i++;
	}
}