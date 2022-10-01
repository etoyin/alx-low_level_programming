#include <stdio.h>
#include <stdlib.h>

/**
 * main- a program that prints its name
 *
 * @argc: input holds the number of arguments passed
 * @argv: input array pointer that holds the arguments passed
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i = argv[1] * argv[2];

	if (argc > 2)
	{
		printf("%ld\n", i);
		return (0);
	}
	printf("Error\n");
	return (1);
}
