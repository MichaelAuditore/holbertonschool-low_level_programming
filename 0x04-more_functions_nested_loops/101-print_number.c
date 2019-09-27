#include "holberton.h"

/**
 * print_number - print an integer number
 * @n: integer number to evaluate
 *
 * not return
 */
void print_number(int n)
{
	unsigned int number;
	unsigned int reverse;
	int lastDigit;

	if (n < 0)
	{
		n = (n * -1);
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
	}
	number = n;
	reverse = 0;
	lastDigit = 0;
	while (number > 0)
	{
		lastDigit = number % 10;
		reverse = (reverse * 10) + lastDigit;
		number = number / 10;
	}
	while (reverse > 0)
	{
		lastDigit = reverse % 10;
		_putchar(lastDigit + '0');
		reverse = reverse / 10;
	}
}
