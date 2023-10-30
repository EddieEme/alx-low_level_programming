#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of text file
 * @letters:  the number of letters it should read and print
 * Return: 0 if file cannot be read or opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, rd, wrt;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fp);
		return (0);
	}
	rd = read(fp, buffer, letters);
	if (rd == -1)
	{
		return (0);
	}
	wrt = write(STDOUT_FILENO, buffer, rd);
	if (wrt == -1)
	{
		return (0);
	}
	if (rd != wrt)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	free(buffer);
	close(fp);
	return (wrt);
}
