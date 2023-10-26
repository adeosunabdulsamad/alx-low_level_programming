#include "main.h"

/**
 * _factorial - the function should return -1 to indicate an error
 * @s: string to print
 */

int factorial(int n)
{
    int res;
    int i;

    res =1;
    i=1;
    if (n == 0)
    {
        return(-1);
    }
    while (i <= n)
    {
        res = res * i;
        i++;
    }
    return(res);
}