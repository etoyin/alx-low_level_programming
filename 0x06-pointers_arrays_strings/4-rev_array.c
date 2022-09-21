#include "main.h"

/**
 * reverse_array - reverse array function
 * @a: input array
 * @n: input 2
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}