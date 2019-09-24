#include "holberton.h"

/**
 * _abs - initialize the program
 * This function prints the absolute value of a number
 * @c: this is the char to evaluate
 *
 * Return: last digit
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

/**
 * print_last_digit - initialize the program
 * This function prints the last digit of a number
 * @c: this is the char to evaluate
 *
 * Return: last digit
 */

int print_last_digit(int c)
{
	int a;

	a = _abs(c);
	a %= 10;
	_putchar(a + '0');
	return (a);
}
