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
		b = a;
		if ((a % 3 == 0) || (a % 5 == 0))
			b = b + a;
	}
	printf("%d\n", b);
	return (0);
}
