#include "main.h"

/**
 * leet - let code words
 * @s: input
 * Return: char
 */

char *leet(char *s)
{
	int i = 0, j;
	int upp[5] = {97, 101, 111, 116, 108};
	int low[5] = {65, 69, 79, 84, 76};
	int subNum[5] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 5)
		{
			if (s[i] == upp[j] || s[i] == low[j])
			{
				s[i] = subNum[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}