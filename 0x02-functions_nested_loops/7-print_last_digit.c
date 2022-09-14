#include "main.h"

/**
 * print_last_digit - to print the last digit of a number
 * @c: input parameter
 * Return: 0 or 1
 */

int print_last_digit(int c)
{
	int las;

	if (c < 0)
		las = (-1) * (c % 10);
	else
		las = c % 10;
	_putchar(las + '0');
	return (las);
}
