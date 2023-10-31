#include "main.h"
#include <stdlib.h>

/** _strdup - returns a pointer with a new string
 * @str - string to be duplicated
 * @s - malloc reallocated string
 *
 * return - returns the value of the string
 */

char *_strdup(char *str)
{
	char *s;

	if (str==NULL)
		return NULL;
	s = malloc(sizeof(char));
	s = str;
	return(s);
}
