#include "main.h"

/**
 * strlen -strlen block
 * Description: string length function
 * @s: input param
 * Return: 0 or 1 or any integer
 */

int strlen(char *s)
{
	int i = 0, counter = 0;

	while (*s != '\0')
	{
		s[++i];
		counter++;
	}
	return (counter)
}
