#include "main.h"
#include <stdlib.h>


/** _create__array - This is the function to create an array
 * @size - The size of the array
 * @c - The first character of the array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size==0)	
		return NULL;
	ar = malloc(size * (sizeof(char)));
	while (i < size)
	{
		*(ar + i) = c;
		i++;
	}
	*(ar + size) = '\0';
	if ( ar == NULL)
		return (1);
	return (ar);
}
