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
	unsigned int i = 0;

	while (i < n)
	{
		s[i++] = b;
	}
	return (s);
}
