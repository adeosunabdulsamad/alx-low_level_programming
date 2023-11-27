#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buffer;
	if (filename == NULL)
		return -1;
        fd = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR | O_TRUNC);
	if (fd == -1)
		return -1;
	buffer = text_content;
        write(fd, buffer, sizeof(buffer) - 1);
	close(fd);
	return 1;
}

