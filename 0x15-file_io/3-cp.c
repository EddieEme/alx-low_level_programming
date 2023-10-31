#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void file_status(int stat, int fd, char *filename, char mode);
/**
 * main - copy content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wrote, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	file_status(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	file_status(dest, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
		{
			file_status(-1, -1, argv[1], 'O');
		}
		wrote = write(dest, buffer, n_read);
		if (wrote == -1)
		{
			file_status(-1, -1, argv[2], 'W');
		}
	}
	close_src = close(src);
	file_status(close_src, src, NULL, 'C');
	close_dest = close(dest);
	file_status(close_dest, dest, NULL, 'C');
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
