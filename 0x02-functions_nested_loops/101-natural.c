#include "main.h"
#include <stdio.h>

/**
 * naturals - natural numbers
 * Description: print naturals
 */

void naturals(void)
{
	int i = 0;
	int c = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			c = c + i;
		}
		i++;
	}
	printf("%d\n", c);
}

/**
 * main - main
 * Description: yjis is the description
 * Return: 0
 */

int main(void)
{
	naturals();
	return (0)
}
