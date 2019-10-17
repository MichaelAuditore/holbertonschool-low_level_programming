#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - creates an amount of memory dinamically
 * @b: Bytes to amount into memory
 * Return: A pointer with a dynamic amount of memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
