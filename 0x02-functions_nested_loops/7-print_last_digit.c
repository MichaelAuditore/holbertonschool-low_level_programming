#include "holberton.h"

/**
 * print_last_digit - initialize the program
 * This function prints the last digit of a number
 * @c: this is the char to evaluate
 *
 * Return: last digit
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	c = c % 10;
	_putchar('0' + c);
	return (c);
}
