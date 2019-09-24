#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - initialize the program
 * This function prints the numbes until 98 ir order or reverse
 * @n: this is the char to evaluate
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if(n != 98)
				printf(", ");
		}
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if(n != 98)
			printf(", ");
		}
	}
	else
		printf("%d", n);
	printf("\n");
}
