#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a given string
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
		i++;
	while (j[src])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

/**
 * argstostr - add the arguments to an array and
 * concatenate an new line to each one
 * @ac: arguments counter
 * @av: pointer to pointer of arguments
 * Return: array with arguments
 */
char *argstostr(int ac, char **av)
{
	char *ar;
	int i = 0;
	int len = 1;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		len += _strlen(av[i]) + 1;
		i++;
	}
	ar = malloc(len * sizeof(char));
	i = 0;
	while (i < ac)
	{
		_strcat(ar, av[i++]);
		_strcat(ar, "\n");
	}
	if (!ar)
		return (NULL);
	return (ar);
}
