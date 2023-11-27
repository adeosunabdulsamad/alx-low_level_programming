#include <stdio.h>
#include "main.h"

/*
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename==NULL)
		return 0;
	FILE *fd;
	fd = open(filename, O_RDWR | O_CREAT | S_IRUSR | S_IWUSR);
	if (fd == -1)
		return 0;
	char buffer[letters];
	ssize_t bytesRead = read(fd, buffer, sizeof(buffer));
        _putchar(fd, buffer, sizeof(buffer) - 1);
	close(fd);
	return bytesRead;
}
