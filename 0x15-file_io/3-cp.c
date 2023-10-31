#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
  * error_exit_int - handles error message to the stderr
  * @exit_code: exit code to return 0 for success non-zero for an error
  * @msg: error message to be printed on stderr
  * @arg: argument contained in the msg
  * Return: Nothing
  */

void error_exit_int(int exit_code, const char *msg, const int arg)
{
	dprintf(2, msg, arg);
	exit(exit_code);
}

/**
  * error_exit_str - handles error message to the stderr
  * @exit_code: exit code to return 0 for success non-zero for an error
  * @msg: error message to be printed on stderr
  * @arg: argument contained in the msg
  * Return: Nothing
  */

void error_exit_str(int exit_code, const char *msg, const char *arg)
{
	dprintf(2, msg, arg);
	exit(exit_code);
}
/**
 * copy_file - copy content of a file to another
 * @fd_from: file from which to copy content from
 * @fd_to: destination of the copied content
 * Return: total number of bytes.
 */

ssize_t copy_file(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t total_bytes = 0;
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (bytes_read == -1)
			return (-1);

		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			return (-1);

		if (bytes_written != bytes_read)
		{
			return (-1);
		}
		total_bytes += bytes_written;
	}
	return (total_bytes);
}
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	const char *file_from, *file_to;
	ssize_t bytes_copied;

	if (argc != 3)
	{
		error_exit_str(97, "Usage: cp file_from file_to\n", "");
	}
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		error_exit_str(98, "Error: Can't read from file %s\n", file_from);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
		    S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		error_exit_str(99, "Error: Can't write to %s\n", file_to);
	}
	bytes_copied = copy_file(fd_from, fd_to);

	if (bytes_copied == -1)
	{
		error_exit_str(99, "Error: Can't write to %s\n", file_to);
	}
	if (close(fd_from) == -1)
	{
		error_exit_int(100, "Error: Can't close fd %d\n", fd_from);
	}
	if (close(fd_to) == -1)
	{
		error_exit_int(100, "Error: Can't close fd %d\n", fd_to);
	}
	return (0);
}
