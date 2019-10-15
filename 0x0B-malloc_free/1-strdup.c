#include "holberton.h"
#include <stdlib.h>
/**
 * _strcpy - store a copy of a pointer into another pointer
 * @dest: Pointer one
 * @src: Pointer two
 * Return: Pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i[src] != '\0')
	{
		i[dest] = i[src];
		i++;
	}
	i[dest] = '\0';
	return (dest);
}
/**
 * _strdup - reallocate an array in newly allocated space in memory
 * @str: starter address to reallocate
 * Return: New address of array
 */
char *_strdup(char *str)
{
	char *nstr;
	int i = 0;

	while (str[i])
		i++;
	if (str == NULL)
		return (NULL);

	nstr = (char *) malloc(i + 1 * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	_strcpy(nstr, str);
	return (nstr);
}
