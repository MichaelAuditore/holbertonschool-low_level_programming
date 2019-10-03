#include "holberton.h"

/**
 * _strcmp - compare a string adding all characters
 * @s1: String one
 * @s2: String two
 * Return: A hash
 */
int _strcmp(char *s1, char *s2)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		sum1 = sum1 + 10 + (s1[i] - '0');
	for (i = 0; s2[i] != '\0'; i++)
		sum2 = sum2 + 10 + (s2[i] - '0');
	return (sum1 - sum2);
}
