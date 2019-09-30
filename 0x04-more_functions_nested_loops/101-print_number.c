#include "holberton.h"

/**
 * print_number -  comes to print an integer
 * @n: Integer value
 * not return
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	a = n;
	if (a / 10 != 0)
		print_number(a / 10);
	_putchar('0' + a % 10);
}
