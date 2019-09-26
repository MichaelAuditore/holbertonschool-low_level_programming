#include "holberton.h"

/**
 * print_most_numbers - initialize the program
 * It works to print the only number digits except 2 and 4
 * Not return
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10 ; a++)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
	}
	_putchar('\n');
}
