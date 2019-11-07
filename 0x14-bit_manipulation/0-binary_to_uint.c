#include "holberton.h"
/**
 * binary_to_uint - convert a binary into unsigned integer
 * @b: The pointer with binary number
 * Return: The number if its posible to convert or 0 if doesn't
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int power = 0;
	unsigned int pos = 0;

	if (*b == '1' && *(b + 1) == '\0')
		return (1);

	if (*b == '\0' || b == NULL)
		return (0);

	while (b[pos] != '\0')
	{
		if (b[pos] != '1' && b[pos] != '0')
			return (0);
		pos++;
	}
	while (pos > 0)
	{
		if (b[pos - 1] == '1' && b[pos] == '\0')
		{
			power = 2;
			number += 1;
			pos--;
		}
		else
		{
			if (b[pos - 1] == '0' && b[pos] == '\0')
			{
				power = 2;
				pos--;
			}
			else
				power += power;
		}
		if (b[pos - 1] == '1' && b[pos] != '\0')
			number += power;
		pos--;
	}
	return (number);
}
