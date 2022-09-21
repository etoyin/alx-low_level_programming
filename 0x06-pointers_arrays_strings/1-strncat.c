#include "main.h"
/**
 * _strcat - concatenate 2 strings
 * @dest: destination strings
 * @src: source strings
 * @n: number of src
 * Return: value
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n)
	{
		dest[i++] = src[j];
		j++;
	}

	return (dest);
}
