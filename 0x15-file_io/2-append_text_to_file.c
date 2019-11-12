#include "holberton.h"
#include <stdio.h>
/**
 * append_text_to_file - append text to a file using syscalls
 * @filename: Reference to the name of the file
 * @text_content: Reference to text will come into file
 * Return: 1 is success or -1 is not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int len = 0;
	int w = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content == NULL && file == 1)
	{
		close(file);
		return (1);
	}
	while (text_content[len] != '\0')
		len++;

	write(file, text_content, len);
	if (w == -1)
		return (-1);
	close(file);
	return (1);
}
