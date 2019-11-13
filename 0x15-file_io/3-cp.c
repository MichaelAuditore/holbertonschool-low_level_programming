#include "holberton.h"
#include <stdio.h>
/**
 * main - copy a string of a file into another file
 * @argc: Counter of arguments
 * @argv: Pointer to pointer of arguments
 * Return: 1 is success or -1 is not
 */
int main(int argc, char **argv)
{
	char buffer[1024];
	int file_to;
	int file_from;
	int r = 0, w = 0, c = 0;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((r = read(file_from, buffer, 1024)) > 0)
	{
		w = write(file_to, buffer, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c = close(file_from);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	c = close(file_to);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
