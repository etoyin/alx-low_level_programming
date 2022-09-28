#include "main.h"

/**
 * factorial - function to find factorial of number
 * @n: number input
 * Return: the answer or -1 to indicate error
 *      if number is less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
	{
		if (n == 0)
		{
			return (1);
		}
		return (n * factorial(n - 1));
	}
	
}