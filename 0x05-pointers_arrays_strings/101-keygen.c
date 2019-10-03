#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - start the program
 * prints a random key to open a executable
 * Return: Always 0
 */
int main(void)
{
	int hash = 2772;
	int random;

	srand(time(0));
	while (hash != 0)
	{
		random = rand() % (126 - 32 + 1) + 32;
		if (random == hash)
		{
			printf("%c", random);
			break;
		}
		if (random < (hash - 32))
		{
			printf("%c", random);
			hash -= random;
		}
	}
	return (0);
}
