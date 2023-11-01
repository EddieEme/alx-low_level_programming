#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void file_status(int op_file, int fd, char *filename, char m);
/**
 * main - copy content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int from_file, to_file, n_rd = 1024, wrt, cls_from_file, cls_to_file;
	unsigned int m = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from to_file\n");
		exit(97);
	}
	from_file = open(argv[1], O_RDONLY);
	file_status(from_file, -1, argv[1], 'O');
	to_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, m);
	file_status(to_file, -1, argv[2], 'W');
	while (n_rd == 1024)
	{
		n_rd = read(from_file, buffer, sizeof(buffer));
		if (n_rd == -1)
		{
			file_status(-1, -1, argv[1], 'O');
		}
		wrt = write(to_file, buffer, n_rd);
		if (wrt == -1)
		{
			file_status(-1, -1, argv[2], 'W');
		}
	}
	cls_from_file = close(from_file);
	file_status(cls_from_file, from_file, NULL, 'C');
	cls_to_file = close(to_file);
	file_status(cls_to_file, to_file, NULL, 'C');
	return (0);
}

/**
 * file_status - function to check if a file can be open or not
 * @op_file: descriptor of the file to be opened
 * @filename: name of the file to copied
 * @m: m of file opening or closing
 * @fd: file descriptor
 *
 * Return: void
 */
void file_status(int op_file, int fd, char *filename, char m)
{
	if (m == 'C' && op_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (m == 'O' && op_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (m == 'W' && op_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
