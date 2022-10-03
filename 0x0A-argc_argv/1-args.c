#include <stdio.h>
#include <stdlib.h>

/**
 * main- a program that prints its name
 *
 * @argc: input holds the number of arguments passed
 * @argv: input array pointer that holds the arguments passed
 * Return: Always 0 (Success)
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
