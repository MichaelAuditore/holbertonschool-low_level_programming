#include "holberton.h"
/**
 * _abs - initilize the program
 * This function will print the absolute value of a number
 * @a: is the char to evaluate
 *
 * Return: absolute value
 */
int _abs(int a)
{
	int sum = 0;

	if (a <= 0)
		sum = (a - a) + (-a);
	else
		sum = a;
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
