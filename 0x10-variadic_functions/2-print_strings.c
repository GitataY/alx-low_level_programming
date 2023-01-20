#include "variadic_functions.h"

/**
 * print_strings - prints out strings.
 * @separator: it is the separator between the strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list verlist;
	char *str;
	unsigned int j;

	va_start(verlist, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(verlist, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && j == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(verlist);
}
