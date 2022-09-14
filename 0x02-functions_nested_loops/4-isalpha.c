#include "main.h"

/**
 * _isalpha -  to return all alphabet to be true
 * @c: input parameter
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
