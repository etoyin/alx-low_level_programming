#include "main.h"

/**
 * _islower -  to check if argument
 * is uppercase or lower case letter
 */

int _islower(int c)
{
	if (c >= 65 || c <= 90)
	{
		return (0);
	}
	else if (c >= 97 || c <= 122)
	{
		return (1);
	}
}
