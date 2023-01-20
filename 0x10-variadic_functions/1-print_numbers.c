#include "variadic_functions.h"

/**
 *  print_numbers - prints out numbers entered as parameters
 *  @separator: strings printed between the numbers
 *  @n: the number of integers that are passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list verlist;

	va_start(verlist, n);

	for (j = 0; j < n; j++)
	{
		if (!separator)
			printf("%d", va_arg(verlist, int));
		else if (separator && j == 0)
			printf("%d", va_arg(verlist, int));
		else
			printf("%s%d", separator, va_arg(verlist, int));
	}

	va_end(verlist);

	printf("\n");
}
