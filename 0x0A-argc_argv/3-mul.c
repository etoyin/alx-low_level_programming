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
	int i = 0;

	if (argc > 2)
	{
		printf("%ld\n", (argv[1] * argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
