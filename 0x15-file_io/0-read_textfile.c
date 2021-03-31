#include "holberton.h"
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * 0 if the file can not be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_to_print, written_num;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);

	/* return Number of bytes read on success */
	num_to_print = read(fd, buffer, letters);
	/* return Number of bytes written on success */
	written_num = write(STDOUT_FILENO, buffer, num_to_print);

	if (written_num < 0)
		return (0);

	free(buffer);
	close(fd);
	return (num_to_print);
}
