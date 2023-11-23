#include "main.h"
#include <stddef.h>


unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	if(b==NULL)
		return 0;
	for(; *b != '\0'; b++)
	{
		if(*b != '0' && *b != '1')
			return 0;

		decimal = decimal * 2 +(*b - '0');
	}

	return decimal;
}

