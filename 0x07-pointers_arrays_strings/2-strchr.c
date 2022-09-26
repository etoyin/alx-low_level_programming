#include "main.h"

/**
 * _strchr - locate first occurence
 * @s: input 1
 * @c: input 2
 * Return: char or NULL
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if(*s == c)
		return (s);

	return ('\0');
}
