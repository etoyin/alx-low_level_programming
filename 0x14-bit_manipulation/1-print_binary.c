#include <stdio.h>
#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n: input decimal number
 * Return: nothing alx-low_level_programming/0x14-bit_manipulation
 **/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) - '0');
}
