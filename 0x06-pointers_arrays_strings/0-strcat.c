#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer one
 * @src: pointer two
 * Return: A string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (i[dest])
	{
		i++;
	}
	while (j[src])
	{
		i[dest] = j[src];
		i++;
		j++;
		if (j[src] == '\0')
			break;
	}
	return (dest);
}
