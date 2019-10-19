#include "holberton.h"
#include <stdio.h>
/**
 * add_spaces - add spaces into final string
 * @pos: The last position iterated
 * @size: The size of the string
 * @old_size: The original size of string
 */
void add_spaces(int pos, int size, int old_size)
{
	if (pos % 2 == 0 && old_size % 2 != 0)
	{
		while (pos <= size)
		{
			printf(" ");
			printf(" ");
			pos++;
		}
	}
	if (pos % 2 != 0 && old_size % 2 == 0)
	{
		while (pos < size)
		{
			printf(" ");
			printf(" ");
			pos++;
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
		if (i == size - 1 && size % 10 != 0)
		{
			add_spaces(i, s, size);
		}
		i++;
		if (i % 10 == 0 && i != 0)
			break;
	}
	printf(" ");
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
	int li;
	int j = 0;
	int lp;

	if (*b == '\0')
		size = -1;
	while (i < size)
	{
		li = i;
		li = hexa_values(b, li, size);
		i = li;
		lp = j;
		lp = print_chars(b, lp, size);
		j = lp;
	}
	printf("\n");
}
