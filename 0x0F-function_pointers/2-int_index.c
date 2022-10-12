#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: pointer to array
 * @size: size of @array
 * @cmp: pointer to function call to check index in array
 *       if it matches
 * Return: Always 0 (Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	bool y;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		index = 0
		while (index < size)
		{
			y = cmp(array[index]);
			if (y == TRUE)
				return (index);
			index++
		}
	}

	return (-1);

}
