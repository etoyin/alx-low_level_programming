#include <stdio.h>

/**
 * main- main block
 * Description: print all possible combination
 * of 2 digits number
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			if (j != i && i < j)
			{
				putchar('0' + i);
				putchar('0' + j);
			}

			if (i + j != 17)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
