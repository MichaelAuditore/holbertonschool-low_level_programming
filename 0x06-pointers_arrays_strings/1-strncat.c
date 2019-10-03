#include "holberton.h"

/**
 * _strncat - concatenate an index from a string in another string
 * @dest: First string
 * @src: Second String
 * @n: index
 * Return: A string
 */
char *_strncat(char *dest, char *src, int n)
{
	int ld = 0;
	int i = 0;

	for (; dest[ld] != '\0'; ld++)
	{
	}
	while (i < n && src[i] != '\0')
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	return (dest);
}
