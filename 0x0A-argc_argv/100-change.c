#include <stdio.h>
#include <stdlib.h>

/**
 * main - change an amount of money to cents
 * @argc: arguments counter
 * @argvc: array of arguments
 * Return: Always 0
 */
int main(int argc, char **argvc)
{
	int i;
	int cents = 0;
	unsigned int money = atoi(argvc[argc - 1]);
	int cent[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argvc[argc - 1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	while (money > 0)
	{
		while (i < 5)
		{
			if (money % cent[i] == 0)
			{
				money -= cent[i];
				cents++;
			}
			money % cent[i] != 0 ? i++ : i;
		}
	}
	printf("%d\n", cents);
	return (0);
}
