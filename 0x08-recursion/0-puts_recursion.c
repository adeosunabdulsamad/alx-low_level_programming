#include "main.h"

/**
 * main - check the code
 *
 * Return : Always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0'){
		_putchar(*s);
		_puts_recursion(s+1);
	}
	else{
		_putchar('\n');
		return;
	}
}
