#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - reverse recursion function
 * @s: input string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char *e = strcat('\n', s);
	if (*e == '\0')
	{
		return;
	}
	_print_rev_recursion(++e);
    _putchar(*e);

}
