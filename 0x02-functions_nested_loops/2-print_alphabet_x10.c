#include "main.h"

/**
 * print_alphabet_x10 - to print all aplphabet from
 * a -z in 10 places
 */

void print_alphabet_x10(void)
{
	char i = 'a';
	int j = 0;

	while (j < 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
