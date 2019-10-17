#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - Returns the length of a string
 * @s: Char array
 * Return: length of a string
 */
unsigned int _strlen(char *s)
{
	return ((!*s) ? 0 : 1 + _strlen(s + 1));
}
/**
 * _strncat - concatenate an index from a string in another string
 * @dest: First string
 * @src: Second String
 * @n: index
 * Return: A string
 */
char *_strncat(char *dest, char *src, unsigned int n)
{
	int ld = 0;
	unsigned int i = 0;

	for (; dest[ld] != '\0'; ld++)
		;
	while (i < n && src[i] != '\0')
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	return (dest);
}
/**
 * _strcpy - copies an entire string to a buffer
 * @src: source string to copy
 * @dest: buffer to copy string into
 * Return: returns pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *tmp;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	tmp = dest;

	return (tmp);
}

/**
 * string_nconcat - concatenate a n bytes of a string into another
 * @s1: First Address of string
 * @s2: Second Address of string
 * @n: Number of bytes
 * Return: A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	char *st1 = s1;
	char *st2 = s2;

	if (st1 == NULL)
		st1 = "";
	if (st2 == NULL)
		st2 = "";

	(n > _strlen(st2)) ? (n = _strlen(st2)) : 1;
	str = malloc((_strlen(st1) + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	_strcpy(str, st1);
	_strncat(str, st2, n);
	str[_strlen(st1) + n + 1] = '\0';
	return (str);
}
