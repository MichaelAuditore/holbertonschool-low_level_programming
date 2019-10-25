#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_number -  comes to print an integer
 * @n: Integer value
 * not return
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	a = n;
	if (a / 10 != 0)
		print_number(a / 10);
	_putchar('0' + a % 10);
}
/**
 * print_numbers - print all integer arguments
 * @separator: represents the character to separate the numbers to print
 * @n: Represents the number of arguments passed
 * @...: Variadic arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (n == 0)
		return;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		print_number(va_arg(numbers, int));
		if (i != n - 1)
		{
			if (separator != NULL)
				_putchar(*separator);
			_putchar(' ');
		}
		else
			_putchar('\n');
	}
	va_end(numbers);
}
