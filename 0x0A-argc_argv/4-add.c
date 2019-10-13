#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of a adding followed by new line
 * @argc: arguments counter
 * @argv: array with arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i = 1;
	int ai;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		ai = 0;
		while (argv[i][ai] != '\0')
		{
			if (argv[i][ai] < '0' || argv[i][ai] > '9')
			{
				printf("Error\n");
				return (1);
			}
			ai++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
