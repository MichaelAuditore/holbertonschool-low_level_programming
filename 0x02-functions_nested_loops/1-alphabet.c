#include "holberton.h"

/**
 * print_alphabet - start program
 * this function display the alphabet in lowercase
 * Return: Nothing (Success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a' ; a <= 'z' ; a++)
		_putchar(a);
	_putchar('\n');
}
