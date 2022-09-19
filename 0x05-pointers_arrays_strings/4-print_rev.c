#include "main.h"

/**
 * print_rev - print reverse
 * @c: input
 * Return: void
 */

void print_rev(char *s)                                                                                                                 
{
	int counter = 0, i = 0;

	while (*s != '\0')
	{
		++s;
		counter++;
	}

	while (counter >= 0)
	{
		_putchar(s[counter - 1]);
		counter--;
	}
	_putchar('\n');
}
