#include "holberton.h"

/**
 * _memcpy - Copy a filled area of an pointer to another pointer
 * @dest: Pointer Destiny to insert copy
 * @src: Source to copy a filled area
 * @n: Number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
