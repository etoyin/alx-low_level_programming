#include "main.h"

/**
 * _memcpy - works like memcpy
 * @dest: input destiny
 * @src: input src
 * @n: bytes
 * Return: pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
