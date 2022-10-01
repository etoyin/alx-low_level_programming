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

	while (i < argc)
	{
		printf("%s\n", argv[i]);
        i++;
	}
	return (0);
}
