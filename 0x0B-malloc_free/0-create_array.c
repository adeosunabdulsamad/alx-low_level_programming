#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**_create_array - This is the function to create an array
 * @size - The size of the array
 * @c - The first character of the array
 *
 */

char *create_array(unsigned int size, char c)
{
	if (size=0)
	{
		return NULL;
	}
	char *ar;
	ar = malloc(size * (sizeof(char));
	if (ar == NULL)
	{
	        return NULL;
	}
	ar[0] = c;
	return (0);
