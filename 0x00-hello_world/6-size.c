#include <stdio.h>

/**
 * main - main
 * Print the size of various types
 * return: 0
 * */
int main(void)
{
	int i;
	float f;
	double d;
	char c;

	printf("%d", sizeof(i));
	printf("%d", sizeof(f));
	printf("%d", sizeof(d));
	printf("%d", sizeof(c));

	return (0);
}
