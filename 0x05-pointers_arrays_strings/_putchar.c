#include <unistd.h>

/**
 * _putchar - this function prints a character
 * @c: The character to print
 * Return: An ASCII
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
