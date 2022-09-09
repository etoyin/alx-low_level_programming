#include <stdio.h>

/**
 * main - main block
 * Description: Print all singlr digits
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(48 + i);
		i++;
	}
	putchar('\n');
	return (0);
}
