#include "main.h"

/**
 * @s: input
 * @accept: input
 * Return: numbr of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, k = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = 1;
				break;
			}
			j++;
		}

		if (k == 0)
			break;
	}
	return (i);
}
