#include "main.h"

/**
 * _strchr - locate first occurence
 * @s: input 1
 * @c: input 2
 * Return: char or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s);
		i++;
	}
	if(*s == c)
	{
		return (s);
	}
    return ('\0');
}