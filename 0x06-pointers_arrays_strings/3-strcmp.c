#include "main.h"
/**
 * _strncmp - concatenate 2 strings
 * @s1: destination strings
 * @s2: source strings
 * Return: value
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0, res;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
        {
			res = s1[i] - s2[i];
			break;
        }
		else
			res = s1[i] - s2[i];
		i++;
	}
	return (res);
}
