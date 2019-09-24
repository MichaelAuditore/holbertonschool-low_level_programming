#include "holberton.h"

/**
 * _isalpha - initialize the program
 * This function prints a 1 if the char is lower or uppercase
 * @c: this is the char to evaluate
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	int b = 0;

	if ((c >= 97 && c <= 127) || (c >= 65 && c <= 90))
	{
		b = 1;
	}
	return (b);
}
