#include "holberton.h"

/**
 * _islower - initialize the program
 * This function prints a number 1 or 0
 * expecting the char if uppercase or lowercase
 *
 * @c: is the char
 * Return: a 1 or 0
 */
int _islower(int c)
{
	int b = 0;

	if (c >= 97 && c <= 127)
	{
		b = 1;
	}
	return (b);
}
