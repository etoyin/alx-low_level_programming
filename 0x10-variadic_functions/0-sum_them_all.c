#include "variadic_functions.h"
#include <stdarg.h>

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
	std::va_list args;
    va_start(args, n);
    for (int i = 0; i < n; ++i)
        result += va_arg(args, n);
    va_end(args);
    return result;
}
