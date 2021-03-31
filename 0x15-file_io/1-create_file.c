#include "holberton.h"
#include <fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - function that creates a file
 * permission rw-------
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 *
 * @filename: name of the file to create
 * if filename is NULL return -1
 * @text_content: NULL terminated string to write to the file
 * if text_content is NULL create an empty file
 *
 * Return: 1 on succes
 * -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, num_written, len = 0;

	if (filename == 0)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		num_written = write(fd, text_content, len);

		if (num_written == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
