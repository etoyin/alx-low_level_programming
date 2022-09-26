#include "main.h"

/**
 * _memset - works like the memset() function
 * @s: first input
 * @b: second input
 * @n: third input
 * 
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	char *st = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (st);
}
