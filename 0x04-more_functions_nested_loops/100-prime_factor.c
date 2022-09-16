#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: block block
 * Return: 0
 */

int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	while (i < sqrt(n))
	{
		while (n % i == 0 && n != i)
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
