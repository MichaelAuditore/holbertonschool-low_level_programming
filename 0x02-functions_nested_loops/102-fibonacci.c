#include <stdio.h>

/**
 * main - this executes the program
 *
 * Return: Always 0
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int c = 0;
	long int d = 3;

	printf("1, 2, ");
	while (c < 49)
	{
		d = a + b;
		printf("%lu", d);
		if (c == 48)
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
