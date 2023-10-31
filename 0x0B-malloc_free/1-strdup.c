#include "main.h"
#include <stdlib.h>

/* * _strdup - returns a pointer with a new string
 * @str - string to be duplicated
 * @a - malloc reallocated string
 *
 * return - returns the value of the string
 */

char *_strdup(char *str) 
{
	char *a;
        unsigned int i, len;

	i=0;
	len =0;

	if (str==NULL)
		return NULL;
	while (str[len])
		len++;
	a = malloc(sizeof(char)*(len+1));
	if (a==NULL)
	       return NULL;	
	while (i <= len)
	{
		a[i] = str[i];
		i++;
        }
	a[len+1] = '\0';
	return(a);
}
