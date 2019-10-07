#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: The starter address to fill
 * @n: The first memory bytes of the array
 * @b: Constant byte
 * Return: Array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
