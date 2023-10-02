#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads and prints a specified number of letters from a file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed. 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor = open(filename, O_RDONLY);
	ssize_t bytes_read;
	char *buffer;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(file_descriptor);
	if (bytes_written != bytes_read)
		return (0);
	return (bytes_written);
}
