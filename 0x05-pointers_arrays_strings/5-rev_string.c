#include "main.h"

/**
 * rev_string - string
 * @s: input
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[j] != '\0')
		j++;

	while (i < j / 2)
	{
		temp = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = temp;
		i++;
	}
}
