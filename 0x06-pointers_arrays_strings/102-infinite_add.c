#include "holberton.h"

/**
 * infinite_add - adds two numbers
 * @n1: Pointer one
 * @n2: POinter two
 * @r: contains result of sum
 * @size_r: Buffer size
 * Return: A string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum, len1, len2;
	int i = size_r - 2;
	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;
	len1 -= 1;
	len2 -= 1;
	sum = 0;
	size_r -= 1;
	while (size_r >= 0 && (len1 > 0 || len2 > 0))
	{
		sum += (len1 > 0) ? (n1[len1] - '0') : 0;
		sum += (len2 > 0) ? (n2[len2] - '0') : 0;
		r[size_r--] = sum % 10 + '0';
		sum = sum / 10;
		i--;
		len1--;
		len2--;
	}
	r[size_r] = '\0';

	if (size_r > 0 && i < 0)
	{
		return (0);
	}
	else
	{
		return (r + i);
	}
}
