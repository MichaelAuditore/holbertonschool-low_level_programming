#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - executes the math operations
 * @argc: Argument counter
 * @argv: Pointer of pointer of char
 * Return: If operation dont success generates a exit if not 0
 */
int main(int argc, char **argv)
{
	if (argc > 5 || argc < 5)
	{
		printf("Error");
		exit(98);
	}
	if (argv[2] != '+' || argv[2] != '-' || argv[2] != '*'
	    || argv[2] != '/' || argv[2] != '%')
	{
		printf("Error");
		exit(99);
	}
	if (argv[3] == 0 && (argv[2] == '/' || argv[2] == '%'))
	{
		printf("Error");
		exit(100);
	}
	get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	return (0);
}
