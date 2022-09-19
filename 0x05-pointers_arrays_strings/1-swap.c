#include "main.h"

/**
 * swap_int - a function to swap integers
 * @a: input a
 * @b: input b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
