#include "main.h"

/**
 * print_alphabet - utilizes on _putchar function
 * to print aplhabet a - z
 * Description: a function to print all lower aplphabet
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
