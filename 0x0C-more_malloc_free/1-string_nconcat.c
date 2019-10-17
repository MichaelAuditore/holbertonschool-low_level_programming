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
	unsigned int i = n;
	unsigned int ls1 = _strlen(s1);
	unsigned int ls2 = _strlen(s2);
	int j = 0;

	if (ls1 <= 0)
		s1 = "";
	if (ls2 <= 0)
		s2 = "";

	if (i >= ls2)
		i = ls2;
	else
		i = n;

	str = malloc((ls1 + i) * sizeof(char));
	while (str[j])
		j++;
	_strcpy(str, s1);
	_strncat(str, s2, i);
	str[ls1 + i + 1] = '\0';
	return (str);
}
