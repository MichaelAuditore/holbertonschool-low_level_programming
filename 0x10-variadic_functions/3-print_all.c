#include "variadic_functions.h"
/**
 * print_all - prints argum
 * @format: All formats to print
 * @...: varargs
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *str;

	va_start(list, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'c':
			printf("%c", (char) va_arg(list, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		     || format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
