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
	ssize_t bytesRead;
	char *buffer;
	off_t fileSize;
	int ls = (int)letters;
	if (ls == 0)
		return 0;
	if (filename==NULL)
		return 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return 0;
	fileSize = lseek(fd, 0, SEEK_END);
        lseek(fd, 0, SEEK_SET);
	buffer = malloc(fileSize);
	if (buffer == NULL)
	{
		close(fd);
		return 0;
	}
	bytesRead = read(fd, buffer, fileSize);
	close(fd);
	if (bytesRead == -1)
	{
		free(buffer);
		return 0;
	}
	free(buffer);
	write(STDOUT_FILENO, buffer, bytesRead);
	return bytesRead;
}
