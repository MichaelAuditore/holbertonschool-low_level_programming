#include "holberton.h"
#include <stdlib.h>
/**
 * wordcount - counts the words into a string
 * @str: Address of string to evaluate
 * Return: Number of words
 */
int wordcount(char *str)
{
	int i = 0;
	int wc = 0;

	while (str[i] != '\0')
	{
		while (str[i] >= '!' && str[i] <= '~' && str[i + 1] != ' ')
		{
			i++;
			if (str[i] != ' ' && str[i + 1] == ' ')
			{
				wc++;
				break;
			}
		}
		i++;
	}
	return (wc);
}
/**
 * lengthwords - count each letter of a word
 * @str: Address of string to validate
 * @pos: Position to begins to look for
 * Return: Length of a word
 */
int lengthwords(char *str, int pos)
{
	int length = 0;

	while (str[pos] != '\0')
	{
		while (str[pos] >= '!' && str[pos] <= '~' &&
		       str[pos + 1] != ' ')
		{
			length++;
			pos++;
			if (str[pos] != ' ' && str[pos + 1] == ' ')
			{
				length++;
				break;
			}
		}
		if (length > 0)
			break;
		pos++;
	}
	return (length);
}
/**
 * spaces - return the number of spaces between each word
 * @str: Address of string to evaluate
 * @pos: Initial position
 * Return: Number of spaces
 */
int spaces(char *str, int pos)
{
	int ns;

	while (str[pos] != '\0')
	{
		while (str[pos] == ' ' &&
		       str[pos + 1] == ' ')
		{
			ns++;
			pos++;
			if (str[pos] == ' ' && str[pos + 1] != ' ')
			{
				ns++;
				break;
			}
		}
		if (ns > 0)
			break;
		pos++;
	}
	return (ns);
}
/**
 * _memcpy - Copy a filled area of an pointer to another pointer
 * @dest: Pointer Destiny to insert copy
 * @src: Source to copy a filled area
 * @n: Number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
 * strtow - split a string in two words
 * @str: Address of string to evaluate
 * Return: Pointer of Array of words
 */
char **strtow(char *str)
{
	char **s;
	int nw = 0;
	unsigned int lword = 0;
	int i = 0;
	int j = 0;
	int sword = 0;

	nw = wordcount(str);
	s = malloc(sizeof(char *) * (nw + 1));
	if (s == NULL)
		return (NULL);
	while (i < nw)
	{
		sword = spaces(str, i);
		lword = lengthwords(str, i);
		s[i] = malloc(sizeof(char) * (lword + 1));
		if (s[i] == NULL)
		{
			while (--i >= 0)
				free(s[i]);
			free(s);
			return (NULL);
		}
		_memcpy(*(s + i), str + j, lword);
		s[i][lword + 1] = '\0';
		j += lword + sword;
		lword = 0;
	}
	s[i] = NULL;
	return (s);
}
