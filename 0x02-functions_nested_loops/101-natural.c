#include <stdio.h>

/**
 * main - start the program
 * This function displays and sum all multiplies of 3 or 5
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;
	for (a = 0 ; a < 1024 ; a++)
	{
		if ((a % 3) || (a % 5))
			b += a;
	}
}
