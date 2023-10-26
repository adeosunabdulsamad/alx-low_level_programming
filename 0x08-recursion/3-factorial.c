#include "main.h"

/**
 * _factorial - the function should return -1 to indicate an error
 * @s: string to print
 */

int factorial(int n)
{
    if (n <= 0)
    {
        return(-1);
    }
     if (n == 0)
    {
        return(1);
    }
    else
    {
    return(n * factorial(n - 1));
    }
}