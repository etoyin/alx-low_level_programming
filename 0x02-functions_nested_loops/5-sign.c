#include "main.h"

/**
 * print_sign - to print sign of a number
 * @c: input parameter
 * Return: 0 or 1
 */

int print_sign(int c)
{
	int res = 0;
	char sign;

	if (c > 0)
	{
		sign = '+';
		res = 1;
	}
	if (c == 0)
	{
		sign = '0';
		res = 0;
	}
	if (c < 0)
	{
		sign = '-';
		res = -1;
	}
	_putchar(sign);
	return (res);
}
