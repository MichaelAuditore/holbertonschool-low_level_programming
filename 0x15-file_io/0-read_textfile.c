#include "holberton.h"
/**
 * read_textfile - read the text for a file
 * @filename: Reference to path of filename
 * @letters: Number of letters to show
 * Return: Number of letter it could be show or print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *c;
	ssize_t r;
	ssize_t w;

	fp = open(filename, O_RDONLY);

	if (fp == -1 || filename == NULL)
		return (0);

	c = malloc(letters);
	if (c == NULL)
		return (0);
	r = read(fp, c, letters);
	if (r == -1)
	{
		free(c);
		close(fp);
		return (0);
	}
	w = write(STDOUT_FILENO, c, r);
	free(c);
	close(fp);
	return (w);
}
