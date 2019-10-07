#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: First String
 * @accept: Second String
 * Return: number of chars founded in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i = 0;
	int j;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (count);
}
