#include <stdio.h>
#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n: input decimal number
 * Return: nothing alx-low_level_programming/0x14-bit_manipulation
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 1)
		return (n & 1);
	else
		return (get_bit(n >> 1, index - 1));
	return (-1);
}
