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
	int counter = 0;
	char *p;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = s[i];
			counter++;
		}
	}
	if(!counter)
	{
		p = '\0';
	}
    return (p);
}