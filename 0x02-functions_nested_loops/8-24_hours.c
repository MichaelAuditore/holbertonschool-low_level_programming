#include "holberton.h"

/**
 * jack_bauer - initialize the count
 * This function display a time count until 24 hours
 *
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0 ; a < 24 ; a++)
	{
		for (b = 0 ; b < 60 ; b++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(58);
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
	}
}
