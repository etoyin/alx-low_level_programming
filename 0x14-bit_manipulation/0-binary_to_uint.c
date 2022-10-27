#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert from binary to int
 * @b: input binary
 * Return: decimal
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int length = 0, base = 1;

	if (b == NULL)
		return (0);

	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}

	while (length)
	{
		decimal += ((b[length - 1] - '0') * base);
		base = base * 2;
		length--;
	}
	return (decimal);
}
