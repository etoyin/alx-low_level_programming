#include <stdio.h>

/**
 * main - main block
 * Description: main block
 * Return: 0
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
