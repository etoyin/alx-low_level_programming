#include "main.h"

/**
 * _islower -  to check if argument
 * is uppercase or lower case letter
 *
 * @c: check input function
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	int res = 0;

	if (c >= 65 && c <= 90)
	{
		res = 0;
	}
	else if (c >= 97 && c <= 122)
	{
		res = 1;
	}
	return (res);
}
