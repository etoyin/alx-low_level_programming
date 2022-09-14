#include "main.h"

/**
 * main -main block
 * Description: main block
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet
 * Description: a function to print all lower aplphabet
 * Return: string
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
	return (0);
}
