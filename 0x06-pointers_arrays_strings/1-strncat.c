#include "main.h"
/**
 * _strncat - concatenate 2 strings
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

	while (j < n && src[j] != '\0')
	{
		dest[i++] = src[j];
		j++;
	}
    dest[i + j] = '\0';

	return (dest);
}
