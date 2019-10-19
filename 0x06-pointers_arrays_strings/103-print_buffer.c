#include "holberton.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer of a string
 * @b: buffer to print
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i = 0;
	int j = 0;
	int s = size;

	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x:", i);
		while (s % 10 != 0)
			s++;
		while (i < size)
		{
			if (i % 2 == 0)
				printf(" ");
			if (b[i] >= 32 && b[i] <= 126)
				printf("%x", b[i]);
			else
				printf("0%x", b[i]);
			if (i == size - 1 && size % 10 != 0)
			{
				while (i < s)
				{
					printf(" ");
					printf(" ");
					i++;
				}
			}
			i++;
			if (i % 10 == 0 && i != 0)
			{
				break;
			}
		}
		printf(" ");
		while (j < size)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf("%c", '.');
			j++;
			if (j != 0 && j % 10 == 0)
			{
				printf("\n");
				break;
			}
		}
	}
	printf("\n");
}
