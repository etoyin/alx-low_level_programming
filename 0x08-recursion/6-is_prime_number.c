#include "main.h"

/**
 * is_prime_number - check prime number
 * @n: number to check
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n == 0 || n == 1)
		return (0);
	prime_checker(n, 2);
}

/**
 * prime_checker - check prime number
 * @n: number to check
 * @i: counter input
 * Return: 0 or 1
 */

int prime_checker(int n, int i)
{
	if (n <= 2)
    	return (n == 2) ? 1 : 0;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;
 
    // Check for next divisor
    return isPrime(n, i + 1);
}