#include "variadic_functions.h"
/**
 * print_char - print a char
 * @args: List of variadic arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - print a integer
 * @args: List of variadic arguments
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_float - print a float
 * @args: List of variadic arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print a string
 * @args: List of variadic arguments
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - print all arguments of any type
 * @format: Pointer of formats to print and evaluate
 * @...: Variadic arguments to print
 */

void print_all(const char * const format, ...)

{
	int i;
	va_list args;
	char *coma;
	form_at funcs[] = {
		{'c', print_char},
		{'f', print_float},
		{'i', print_int},
		{'s', print_string}
	};
	int j;

	i = 0;
	va_start(args, format);
	coma = "";
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == funcs[j].c)
			{
				printf("%s", coma);
				funcs[j].f(args);
				coma = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
