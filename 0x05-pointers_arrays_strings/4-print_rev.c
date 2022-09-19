#include "main.h"

/**
 * print_rev - print reverse
 * @s: input
 * Return: void
 */

void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		++counter;

	--counter;

	while (counter >= 0)
	{
		_putchar(s[counter]);
		--counter;
	}
	_putchar('\n');
}
