#include <stdio.h>
/**
 * main - prints each argument followed by new line
 * @argc: arguments counter
 * @argv: array with arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
