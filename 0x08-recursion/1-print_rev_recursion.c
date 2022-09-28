#include "main.h"

/**
 * _print_rev_recursion - reverse recursion function
 * @s: input string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
    _putchar(*s);
}
