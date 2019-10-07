#include "holberton.h"

/**
 * _strchr - founds a match for a character in the string
 * @s: The starter address to evaluate the pattern
 * @c: char to found into the address
 * Return: NULL if no found match or pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	for (; *s; s++)
	{
		if (*s == c)
		{
			break;
		}
		i--;
	}
	return (*s == c ? s : 0);
}
