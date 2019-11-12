#include "holberton.h"
#include <stdio.h>
/**
 * verify_close - verify if write into new file
 * @w: File Id
 */
void verify_close(int w)
{
	if (close(w) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", w);
		exit(100);
	}
}
/**
 * verify_open - verify if write into new file
 * @w: File Id
 * @filename: To Know if copy or not
 */
void verify_open(int w, char *filename)
{
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * main - copy a string of a file into another file
 * @argc: Counter of arguments
 * @argv: Pointer to pointer of arguments
 * Return: 1 is success or -1 is not
 */
int main(int argc, char **argv)
{
	char *buffer;
	int file_to;
	int file_from;
	int r = 0, w = 0, i = 0;

	buffer = malloc(1024);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	verify_open(file_from, argv[1]);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	verify_open(file_to, argv[2]);

	r = read(file_from, buffer, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (buffer[i] != '\0')
		i++;
	w = write(file_to, buffer, i);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	verify_close(file_from);
	verify_close(file_to);
	free(buffer);
	return (1);
}
