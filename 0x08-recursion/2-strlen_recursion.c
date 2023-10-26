#include "main.h"

/**
 * _strlen_recursion - prints a string, followed by a new line
 * @s: string to print
 */

int _strlen_recursion(char *s)
{
    if (*s)
    {
        return(1 + _strlen_recursion(s + 1));
    }
    else
    {
        return(0);
    }
}