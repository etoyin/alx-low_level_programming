#include <stdio.h>
#include "main.h"

/**
 * get_bit - get bit of an index
 * @n: input decimal number
 * @index: input index
 * Return: the value of bit alx-low_level_programming/0x14-bit_manipulation
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index < 1)
		return (n & 1);

	return (get_bit(n >> 1, index - 1));
}
