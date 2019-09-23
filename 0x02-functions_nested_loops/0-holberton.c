#include <stdio.h>
#include "holberton.h"

/**
 * main - start program
 * this function display a string Holberton
 * Return: Always 0 (Success)
 */
int main(void)
{
	char holberton [] = {'H','o','l','b','e','r','t','o','n'};
	int length = sizeof(holberton);
	int a;

	for(a = 0 ; a < length ; a++ )
		_putchar(holberton[a]);
	_putchar('\n');
	return (0);
}
