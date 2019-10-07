#include "holberton.h"

/**
 * _strchr - founds a match for a character in the string
 * @s: The starter address to evaluate the pattern
 * @c: char to found into the address
 * Return: NULL if no found match or pointer
 */
char *_strchr(char *s, char c)
{
	int pos = 0;
	int length = 0;
	int f = 0;
	int fin = 0;

	for (; s[pos] != '\0'; pos++)
	{
		if (s[pos] == c)
		{
			f = 1;
			break;
		}
	}
	while (s[length] != '\0')
		length++;
	while (pos <= length - 1)
	{
		s[fin] = s[pos];
		pos++;
		fin++;
	}
	while (fin <= length -1)
	{
		s[fin] = '\0';
		fin++;
	}
	if (f == 1)
		return (s);
	else
		return (0);
}
