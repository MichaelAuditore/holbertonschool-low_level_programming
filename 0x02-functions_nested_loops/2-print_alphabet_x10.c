#include "holberton.h"

/**
 * print_alphabet_x10 - start the program
 * This function prints the alphabet 10 times
 *
 * Return: not return.
 */
void print_alphabet_x10(void)
{
	int i;
	int b;

	for (i = 0 ; i < 10 ; i++)
	{
		for (b = 'a' ; b <= 'z' ; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}

}
