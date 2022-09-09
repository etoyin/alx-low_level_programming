#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

/**
 * main - main block
 * Description: Random Number
 * Return: 0
 **/

int main(void)
{
	int n;

	char hj[] = "and is less than 6 and not 0";

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, (n % 10));
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, (n % 10));
	else if (n % 10 < 6 && n % 10 != 0)
		printf("Last digit of %d is %d %s\n", n, (n % 10), hj);

	return (0);
}
