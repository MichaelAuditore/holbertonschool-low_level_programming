#include <stdio.h>

/**
 * main - this program prints the name of the program
 * @argc: argument counter
 * @argv: array with arguments passed
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
