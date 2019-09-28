#include "holberton.h"

/**
 * print_number -  comes to print an integer
 * @n: Integer value
 * not return
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar('0' + n % 10);
}
