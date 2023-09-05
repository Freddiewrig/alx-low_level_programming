#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 1024
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments passed to the program.
 * Return: 0 on success, 97 if the number of argument is not correct,
 * 98 if file_from does not exist or can not be read,
 * 99 if file_to can not be created or written to,
 * 100 if a file descriptor can not be closed.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t n_read;
	char buf[BUF_SIZE];

	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((n_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buf, n_read) != n_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (n_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
