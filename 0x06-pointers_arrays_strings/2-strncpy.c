#include "main.h"
/**
 * _strncpy - concatenate 2 strings
 * @dest: destination strings
 * @src: source strings
 * @n: number of src
 * Return: value
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

	return (dest);
}
