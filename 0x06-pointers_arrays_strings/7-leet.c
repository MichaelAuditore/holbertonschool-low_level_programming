#include "holberton.h"
/**
 * leet - replace for a number some letters
 * @c: String
 * Return: A string
 */
char *leet(char *c)
{
	int i, j;
	char lets[11] = {'a', 'A', 'E', 'e', 'o', 'O', 'l', 'L', 't', 'T'};
	char numbers[11] = {'4', '4', '3', '3', '0', '0', '1', '1', '7', '7'};

	i = 0;
	while (c[i] != '\0')
	{
		for (j = 0; lets[j] != '\0'; j++)
		{
			if (c[i] == lets[j])
			{
				c[i] = numbers[j];
			}
		}
		i++;
	}
	return (c);
}
