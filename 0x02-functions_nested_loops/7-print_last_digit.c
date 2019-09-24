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
	int a;
	if (c < 0)
		a = (c - c) + (-c);
	else
		a = c;
	a = a % 10;
	_putchar(a + '0');
	return (a);
}
