#include "holberton.h"

/**
 * print_sign - initialize the program
 * This function prints a symbol expectin the char
 *
 * @n: is the char to evaluate
 * Return: 1 0 or -1
 */
int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		_putchar(43);
	}
	else if (n < 0)
	{
		a = -1;
		_putchar(45);
	}
	else
	{
		a = 0;
		_putchar(48);
	}
	return (a);
}
