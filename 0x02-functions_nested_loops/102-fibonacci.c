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
	int prev = 2;
	int cur = 3;
	int temp;

	printf("%d, ", 1);
	printf("%d, ", 2);

	while (start <= 50)
	{
		temp = cur;
		cur = prev + cur;
		
		printf("%d, ", cur);
		prev = temp;
		start++;
	}
	return (0);
}
