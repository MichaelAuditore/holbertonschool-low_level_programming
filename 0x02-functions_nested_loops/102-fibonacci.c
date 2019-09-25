#include <stdio.h>

/**
 * main - start the program
 * This function displays the first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c = 0;

	printf("%u, ", a);
	printf("%u, ", b);
	while (c < 48)
	{
		if (a < b)
		{
			printf("%u, ", a + b);
			a = a + b;
		}
		if (b < a)
		{
			if (c == 47)
				printf("%u", b + a);
			else
				printf("%u, ", b + a);
			b = b + a;
		}
		c++;
	}
	printf("\n");
	return (0);
}
