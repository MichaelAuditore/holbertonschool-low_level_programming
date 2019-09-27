#include <stdio.h>

/**
 * main - start the program
 * This function print Fizz Buzz if the number
 * is multiple of 3 or 5
 * Return: Always 0
 */
int main(void)
{
	int a = 1;

	for (; a < 101; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);
		printf(" ");
	}
	printf("\n");
	return (0);
}
