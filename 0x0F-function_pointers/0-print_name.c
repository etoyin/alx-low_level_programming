#include "function_pointers.h"
/**
 *
 * print_name - function to print name
 * Description: function to print name in first argument
 * @name: First input
 * @f: secont input function
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	void (*fff)(char *) = &f;

	(*fff)(name);
}
