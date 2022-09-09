#include <stdio.h>

/**
 * main - main block
 * Description: print all single digits
 * Return: 0
 */

int main(void)
{
	char i = '0';

	while (i < '10')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
