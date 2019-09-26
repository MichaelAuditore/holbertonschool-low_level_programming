#include "holberton.h"

/**
 * more_numbers - initialize the program
 * It works to print the only number digits except 2 and 4
 * Not return
 */
void more_numbers(void)
{
	int a;
	int b = 0;
	int c;

	for (a = 0; a < 10 ; a++)
	{
		while (b < 15)
		{
			c = (b / 10 == 1 ? b / 10 : b);
			_putchar(c);
			if (c == 1 & b > 15)
				_putchar(b % 10 + '0');
		}
	}
	_putchar('\n');
}
