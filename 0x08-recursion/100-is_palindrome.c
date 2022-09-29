#include "main.h"

/**
 * is_palindrome - function
 * @s: string input
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int last = 0, start = 0;

	last = _strlen_recursion(s) - 1;
	return (_palindrome(s, start, last));

}

/**
 * _palindrome - function
 * @s: string input
 * @start: first index input
 * @length: length of string
 * Return: 0 or 1
 */

int _palindrome(char *s, int start, int last)
{

	if (start < last)
	{
		if (s[start] != s[last])
			return (0);
		return (_palindrome(s, start + 1, last - 1));
	}
	return (1);
}

/**
 * _strlen_recursion - get the length of string
 * @s: input string
 * Return: integer length of string;
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
