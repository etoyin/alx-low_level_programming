#include <stdio.h>

/**
 * main - main block
 * Description: Print alphabets excet q and e
 * Return: 0
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (i == 'q' || i == 'e')
			break;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
