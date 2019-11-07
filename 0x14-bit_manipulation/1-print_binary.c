#include "holberton.h"
/**
 * print_binary - print a decimal into binary
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
