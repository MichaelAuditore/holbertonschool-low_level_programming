#include "holberton.h"
#include <stdio.h>
/**
 * print_spaces - print the needed space to complete the lines
 * @pos: Final position of string
 * @size: Final Size of string when it's not multiply of 10
 * @old: First size
 */
void print_spaces(int pos, int size, int old)
{
	if (pos % 2 != 0)
	{
		while (old < size)
		{
			printf(" ");
			printf(" ");
			old++;
		}
	}
	if (pos % 2 == 0)
	{
		while (old <= size)
		{
			printf(" ");
			printf(" ");
			old++;
		}
	}
}
/**
 * print_chars - print 10 characters latest a new line
 * @b: Address of string to print
 * @pos: position to start to iterate
 * @size: Size of string
 * Return: The last position of iteration
 */
int print_chars(char *b, int pos, int size)
{
	int i = pos;

	while (i < size)
	{
		if (b[i] >= 32 && b[i] <= 126)
			printf("%c", b[i]);
		else
			printf("%c", '.');
		i++;
		if (i != 0 && i % 10 == 0)
		{
			printf("\n");
			break;
		}
	}
	return (i);
}
/**
 * hexa_values - print two hexadecimal values
 * @b: Address of string to print
 * @pos: position to start to iterate
 * @size: the size of string
 * Return: The last position of iteration
 */
int hexa_values(char *b, int pos, int size)
{
	int i = pos;
	int s = size;

	while (s % 10 != 0)
		s++;
	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x:", i);
		if (i % 2 == 0)
			printf(" ");
		if (b[i] >= 32 && b[i] <= 126)
			printf("%x", b[i]);
		else
			printf("0%x", b[i]);
		if (i == size - 1 && i % 2 != 0)
		{
			print_spaces(i, s, size);
		}
		i++;
		if (i % 10 == 0 && i != 0)
		{
			printf(" ");
			break;
		}
	}
	return (i);
}
/**
 * print_buffer - prints a buffer of a string
 * @b: buffer to print
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i = 0;
	int j = 0;

	if (*b == '\0')
		size = -1;
	while (i < size)
	{
		i = hexa_values(b, i, size);
		j = print_chars(b, j, size);
	}
	printf("\n");
}
