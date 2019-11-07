#include "holberton.h"
/**
 * binary_to_uint - convert a binary into unsigned integer
 * @b: The pointer with binary number
 * Return: The number if its posible to convert or 0 if doesn't
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, power = 0, pos = 0;

	if (b == 0)
		return (0);

	while (b[pos] != '\0')
	{
		if (b[pos] != '1' && b[pos] != '0')
			return (0);
		pos++;
	}
	if (pos == 1)
		return (*b - '0');
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
