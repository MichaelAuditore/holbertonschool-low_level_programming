#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main - executes the math operations
 * @argc: Argument counter
 * @argv: Pointer of pointer of char
 * Return: If operation dont success generates a exit if not 0
 */
int main(int argc, char **argv)
{
	int res;
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[3]);

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
		&& *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (n2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(argv[2])(n1, n2);
	printf("%d\n", res);
	return (0);
}
