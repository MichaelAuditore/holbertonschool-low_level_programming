#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of current function
 * @argc: Counter of arguments
 * @argv: Pointer to pointer
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		printf("%02x", ((unsigned char *)main)[i]);
		if (i != (bytes - 1))
			printf(" ");
		else
			printf("\n");
	}
}
