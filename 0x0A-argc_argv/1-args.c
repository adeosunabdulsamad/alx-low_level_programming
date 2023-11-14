#include <stdio.h>

/**
 * @argc - count of arguments
 * main - function to be run that returns integer
 * @argv - vector of argument
 *
 * return - returns value of zero
 */

 int main (int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc-1);
	return 0;
}
