#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return 1;
	}
	printf("%d\n", _atoi(argv[1])*_atoi(argv[2]));
	return 0;
}
