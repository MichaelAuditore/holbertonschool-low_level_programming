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
	long int cents = 0;
	long int money = atoi(argvc[argc - 1]);
	int cent[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	while (money > 0)
	{
		i = 0;
		while (i < 5)
		{
			if (money % cent[i] == 0)
			{
				money -= cent[i];
				cents++;
				break;
			}
			i++;
		}
	}
	printf("%ld\n", cents);
	return (0);
}
