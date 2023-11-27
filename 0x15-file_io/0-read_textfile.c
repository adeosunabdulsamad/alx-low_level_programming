#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/*
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	if (filename==NULL)
		return 0;
	buffer = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDWR | O_CREAT | S_IRUSR | S_IWUSR);
	if (fd == -1)
		return 0;
	ssize_t bytesRead = read(fd, buffer, letters);
	close(fd);
	if (bytesRead == -1)
	{
		free(buffer);
		return 0;
	}
	free(buffer);
	dprintf(STDOUT_FILENO, "%.*s", (int)bytesRead, buffer);
	return bytesRead;
}
