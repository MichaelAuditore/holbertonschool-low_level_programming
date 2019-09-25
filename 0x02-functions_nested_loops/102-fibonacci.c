#include <stdio.h>

/**
 * main - start the program
 * This function displays the first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long int a = 0;
	long int b = 1;
	long int c = 0;
	long int d = 0;

	while (c <= 49)
	{
		d = a + b;
		printf("%lu", d);
		if (c == 49)
		{
		}
		else
		{
			printf(", ");
		}
		a = b;
		b = d;
		c++;
	}
	printf("\n");
	return (0);
}
