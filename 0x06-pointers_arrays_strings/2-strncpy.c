#include "holberton.h"
/**
 * _strncpy - copy an string into another string for an index
 * @dest: First Pointer
 * @src: Second pointer
 * @n: size to define the index
 * Return: A string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
