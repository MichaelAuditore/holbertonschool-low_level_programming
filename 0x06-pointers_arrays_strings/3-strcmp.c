#include "holberton.h"

/**
 * _strcmp - compare a string adding all characters
 * @s1: String one
 * @s2: String two
 * Return: A hash
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res = 0;

	while (i[s1] != '\0')
	{
		if (s1[i] < s2[i])
		{
			res = (s1[i] - s2[i]);
			break;
		}
		if (s1[i] > s2[i])
		{
			res = (s1[i] - s2[i]);
			break;
		}
		i++;
	}
	return (res);
}
