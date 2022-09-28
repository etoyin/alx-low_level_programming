#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - reverse recursion function
 * @s: input string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	char *e;
	int index;

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
    _putchar(*s);

	e = strchr(s, *s);
	index = (int)(e - s);

    if (index == 0)
    {
        _putchar('\n');
    }
}
