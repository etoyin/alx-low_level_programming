#include "main.h"

/**
 * puts_half - function
 * @str: input
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, l = 0;

	while (str[l] != '\0')
		l++;

	if (l % 2 != 0)
		i = (l - 1) / 2;
	else
		i = l / 2;

	while (str[i] != '\0')		
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}