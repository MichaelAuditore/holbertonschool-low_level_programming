#include "holberton.h"

/**
 * _abs - initilize the program
 * This function will print the absolute value of a number
 * @c: is the char to evaluate
 *
 * Return: absolute value
 */
int _abs(int c)
{
	int sum = 0;

	if (c < 0)
		sum = (c - c) + (-c);
	else
		sum = c;

	return (sum);
}
