#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - Returns the length of a string
 * @s: Char array
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _wc - count all words into a string
 * @s: Address of string to count words
 * Return: Word counter
 */
int _wc(char *s)
{
	int isword = 0;
	int word = 0;
	int i;

	for (i = 0; i < _strlen(s) && s[i] != '\0'; i++)
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			if (isword == 0)
			{
				isword = 1;
				word++;
			}
		}
		else if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			if (isword == 1)
				isword = 0;
		}
	}
	return (word);
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

	nstr = malloc(_strlen(str) + 1);
	if (nstr == NULL)
		return (NULL);
	_strcpy(nstr, str);
	return (nstr);
}

/**
 * strtow - split a string into words
 * @str: Address of a string
 * Return: Pointer to pointer with words in each position
 */
char **strtow(char *str)
{
	char **split, *splcpy;
	int i, j, wc, lwc, ss;

	if (str == NULL || str == '\0' || _wc(str) == 0)
		return (NULL);
	wc = _wc(str);
	splcpy = _strdup(str);
	if (splcpy == NULL)
		return (NULL);
	split = malloc((wc + 1) * sizeof(*split));
	if (split == NULL)
		return (NULL);
	i = j = lwc = 0;
	while (str[i] != '\0' && lwc != wc)
	{
		ss = 0;
		while (str[i] == ' ' && str[i] != '\0')
			i++;
		j = i;
		while (splcpy[j] != ' ' && splcpy[j] != '\0')
			j++;
		split[lwc] = malloc(sizeof(char) * (j - i));
		if (split[lwc] == NULL)
		{
			while (--lwc >= 0)
			{
				free(split[lwc]);
				free(split);
				return (NULL);
			}
		}
		while (str[i] != ' ' && str[i] != '\0')
			split[lwc][ss++] = str[i++];
		split[lwc++][ss] = '\0';
		i = j;
	}
	split[wc] = NULL;
	return (split);
}
