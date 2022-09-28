#include "main.h"

/**
 * _puts_recursion - recursion function
 * @s: input string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s--);
}
