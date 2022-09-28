#include "main.h"

/**
 * _pow_recursion - raise to the power of y
 * @x: input 1
 * @y: input 2
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		if (y == 1)
			return (x);
		return (x * _pow_recursion(x, y - 1));
	}
	return (-1);
}