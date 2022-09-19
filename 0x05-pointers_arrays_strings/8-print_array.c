#include <stdio.h>
#include "main.h"

/**
 * print_array - to print n number of elements in array
 * @a: array
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
		printf(" \n");
	else
	{
		while (i < n)
		{
			if (i < n - 1)
				printf("%d, ", a[i]);
			i++;
		}
		printf("%d\n", a[n - 1]);
	}
}
