#include "main.h"
#include <stdio.h>

/**
 * main - main
 * Description: this is waste of time
 * Return: 0
 */

int main(void)
{
	int start = 3;
	long prev = 2;
	long cur = 3;
	long temp;

	printf("%d, ", 1);
	printf("%d, ", 2);
	printf("%d, ", 3);

	while (start <= 50)
	{
		temp = cur;
		cur = prev + cur;

		printf("%ld, ", cur);
		prev = temp;
		start++;
	}
	return (0);
}
