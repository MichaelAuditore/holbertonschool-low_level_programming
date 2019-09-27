File Edit Options Buffers Tools C Help
#include "holberton.h"

/**
 * print_diagonal - prints a diagonal expecting the n spaces
 * @size: The n spaces integer number
 *
 * not return
 */
void print_diagonal(int size)
{
        int a = 1;
        int b = 1;

        if (size <= 0)
                _putchar('\n');
        while (a <= size)
        {
                b = 1;
                while (b <= size)
                {
                        if (b >= (a + b))
                                _putchar(' ');
                        else
                                _putchar('#');
                        b++;
                }
                _putchar('\n');
                a++;
        }
}
