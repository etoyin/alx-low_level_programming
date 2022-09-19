#include "main.h"

/**
 * _puts - function to print a string
 * @str: input param
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
