#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - store a copy of a pointer into another pointer
 * @dest: Pointer one
 * @src: Pointer two
 * Return: Pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *tmp;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	tmp = dest;
	return (tmp);
}
/**
 * _strdup - reallocate an array in newly allocated space in memory
 * @str: starter address to reallocate
 * Return: New address of array
 */
char *_strdup(char *str)
{
	char *nstr;

	if (str == NULL)
		return (NULL);
	nstr = malloc(_strlen(str) + 1);
	if (nstr == NULL)
		return (NULL);
	_strcpy(nstr, str);
	return (nstr);
}
