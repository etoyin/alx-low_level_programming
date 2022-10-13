#include "variadic_functions.h"

/**
 * 
 * sum_them_all -  function to sum all arguments
 * @n: the first parameter
 * Return: 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	va_list argso;
    va_start(argso, n);
    for (unsigned int i = 0; i < n; ++i)
        result += va_arg(argso, int);
    va_end(argso);
    return (result);
}
