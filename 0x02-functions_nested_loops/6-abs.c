#include "main.h"

/**
 * _abs - print the absolte value of input
 * @c: input parameter
 * Return: 0 or 1
 */

int _abs(int c)
{

	if (c < 0)
		c = -1 * c;
	_putchar(c);
	return (1);
}
