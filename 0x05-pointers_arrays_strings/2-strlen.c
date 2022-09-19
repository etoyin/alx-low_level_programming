#include "main.h"

/**
 * _strlen -strlen block
 * Description: string length function
 * @s: input param
 * Return: 0 or 1 or any integer
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		++s;
		counter++;
	}
	return (counter);
}
