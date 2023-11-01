#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void file_status(int op_file, int fd, char *filename, char mode);
/**
 * main - copy content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, n_rd = 1024, wrt, cl_file_from, cl_file_to;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_status(file_from, -1, argv[1], 'O');
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	file_status(file_to, -1, argv[2], 'W');
	while (n_rd == 1024)
	{
		n_rd = read(file_from, buffer, sizeof(buffer));
		if (n_rd == -1)
		{
			file_status(-1, -1, argv[1], 'O');
		}
		wrt = write(file_to, buffer, n_rd);
		if (wrt == -1)
		{
			file_status(-1, -1, argv[2], 'W');
		}
	}
	cl_file_from = close(file_from);
	file_status(cl_file_from, file_from, NULL, 'C');
	cl_file_to = close(file_to);
	file_status(cl_file_to, file_to, NULL, 'C');
	return (0);
}

/**
 * file_status - function to check if a file can be open or not
 * @op_file: descriptor of the file to be opened
 * @filename: name of the file to copied
 * @mode: mode of file opening or closing
 * @fd: file descriptor
 *
 * Return: void
 */
void file_status(int op_file, int fd, char *filename, char mode)
{
	if (mode == 'C' && op_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && op_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && op_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
