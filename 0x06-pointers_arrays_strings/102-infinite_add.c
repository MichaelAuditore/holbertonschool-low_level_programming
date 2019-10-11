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
	int len1 = 0;
	int len2 = 0;
	int lenr = 0;
	int i = size_r - 2;
	int sum = 0;

	r[size_r - 1]  = '\0';
	while (r[lenr] != '\0')
		lenr++;
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	len1--;
	len2--;
	while (i >= 0 && (len1 >= 0 || len2 >= 0))
	{
		sum += (len1 >= 0 ? n1[len1] - '0' : 0);
		sum += (len2 >= 0 ? n2[len2] - '0' : 0);
		r[i--] = (sum % 10) + '0';
		sum = sum / 10;
		len1--;
		len2--;
	}
	if (size_r > lenr && i < 0)
		return (0);
	r[i] = sum + '0';
	return (r + i);
}
