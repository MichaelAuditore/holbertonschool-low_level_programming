#include "holberton.h"
#include <stdlib.h>
/**
 * _memset - fills memory with a constant byte
 * @s: The starter address to fill
 * @n: The first memory bytes of the array
 * @b: Constant byte
 * Return: Array
 */
char *_memset(char *s, int b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: Type in bytes of each element
 * Return: Pointer with elements
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
