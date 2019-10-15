#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with a specific
 * char
 * @size: bytes of the array
 * @c: character to initialize the array
 * Return: character array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ar = (char *) malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
