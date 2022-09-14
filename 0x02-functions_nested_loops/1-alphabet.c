#include "main.h"

/**
 * print_alphabet
 * Description: a function to print all lower aplphabet
 * Return:none
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
