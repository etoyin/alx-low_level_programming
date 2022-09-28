#include "main.h"

/**
 * _sqrt_recursion - sqrt of n
 * @n: input number
 * Return: integer square root of n
 */

int _sqrt_recursion(int n)
{
	int t = 0, s = n / 2;

	square_root(n, t, s);
}

/**
 * square_root - my fxn
 * @n: number to find sqrt
 * @t: temp variable
 * @s: square root
 * Return: square root
 */

int square_root(int n, int t, int s)
{
	if (t == s)
		return (s);
	if (t != s)
	{
		t = s;
		s = ((n / t) + t) / 2;
		return (square_root(n, t, s));
	}
}
