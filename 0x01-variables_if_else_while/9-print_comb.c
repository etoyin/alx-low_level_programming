#include <stdio.h>

/**
 * main - main block
 * Description: print all possible combination
 * of single digits
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);

		if (i != 9)
		{
			putchar(",");
			putchar(" ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
