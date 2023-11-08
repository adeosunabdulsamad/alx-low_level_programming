#include "function_pointer"

/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
		        i++;
		}
	}

	return (-1);
}

