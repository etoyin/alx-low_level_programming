#include "main.h"

/**
 * is_palindrome - function
 * @s: string input
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int i, counter = 0, start = 0;

	counter = _strlen_recursion(s);
	return (_palindrome(s, start, counter));

}

/**
 * _palindrome - function
 * @s: string input
 * @start: first index input
 * @length: length of string
 * Return: 0 or 1
 */

int _palindrome(char *s, int start, int length)
{
	if (start < (length - 1))
	{
		if (s[start] != s[length - 1])
			return (0);
		return (_palindrome(s, start + 1, length - 2));
	}
	return (1);
}