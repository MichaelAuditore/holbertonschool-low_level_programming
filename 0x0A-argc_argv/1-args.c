#include <stdio.h>

/**
 * main - prints the argument counter
 * @argc: argument counter
 * @argv: array with arguments
 * Return: Always 0
 */
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
