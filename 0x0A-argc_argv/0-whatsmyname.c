#include <stdio.h>
#include <stdlib.h>

/**
 * main- a program that prints its name
 *
 * @argc: input holds the number of arguments passed
 * @argv: input array pointer that holds the arguments passed
 * Return: Always 0 (Success)
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
