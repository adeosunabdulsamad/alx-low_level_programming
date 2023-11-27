#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buffer;
	if (filename == NULL)
		return -1;
        fd = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return -1;
	buffer = text_content;
        write(fd, buffer, sizeof(buffer) - 1);
	close(fd);
	return 1;
}

