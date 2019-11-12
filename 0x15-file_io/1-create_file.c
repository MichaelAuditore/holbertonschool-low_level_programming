#include "holberton.h"
#include <stdio.h>
/**
 * create_file - create file using syscalls
 * @filename: Name of new file
 * @text_content: Content of new file
 * Return: 1 is success or -1 is not
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int length = 0;
	int w = 0;

	while (text_content[length] != '\0')
		length++;
	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		return (close(file) == -1 ? -1 : 1);
	w = write(file, text_content, length);
	if (w == -1)
		return (-1);
	return (close(file) == -1 ? -1 : 1);
}
