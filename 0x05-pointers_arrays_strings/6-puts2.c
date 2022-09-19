#include "main.h"

/**
 * puts2 - puts2
 * @str: input
 * Return: void
 */

void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (i % 2 == 0)
            _putchar(str[i]);
        i = i + 1;
    }
    _putchar('\n');
}