#include <stdio.h>

/**
 * main - main block
 * Description: main block
 * Return: 0
 */

int main (void)
{
	int i = 'a';

	while (i <= 'z') {
		putchar("%s\n", i);
		i++;
	}
	return (0);
}
