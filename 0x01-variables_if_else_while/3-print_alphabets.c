#include <stdio.h>

/**
 * main - main block
 * Description: printing of alphabeths
 * Return: 0
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++
	}

	i = 'A';

	while (i <= 'Z')
	{
		putchar(i);
		i++
	}

	putchar('\n');
	return (0);
}
