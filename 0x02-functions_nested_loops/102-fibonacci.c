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
	long int fi = 0;
	long int c = 0;
	
	while (c < 50)
	{
		printf("%lu" fi);
		if (c != 49)
			printf(", ");
		a = b;
		b = fi;
		fi = a + b;
		c++;
	}
	printf("\n");
	return (0);
}
