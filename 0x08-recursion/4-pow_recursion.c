#include "main.h"

/**
 * pow_recursion - returns number x raised to a power of numy
 * @x: number that will be raised
 * @y: number that raises num x
 *
 * Return: pow_recursion of x,y
 */

int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return(-1);
    }
    if (y == 0)
    {
        return(1);
    }
    return(x * _pow_recursion(x, y - 1));
}