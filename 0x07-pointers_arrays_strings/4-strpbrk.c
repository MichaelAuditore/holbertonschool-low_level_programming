#include "holberton.h"

/**
 * _strpbrk - searchs a string for any of a set of bytes
 * @s: The starter address to evaluate the pattern
 * @accept: The chars to evaluate
 * Return: NULL if no found match or pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (0);
}
