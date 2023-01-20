#include "variadic_functions.h"

/**
 * sum_them_all - performs the sum of all its parameters
 * @n: the number of arguments passed to be added
 * Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list verlist;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(verlist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(verlist, int);

	va_end(verlist);

	return (sum);
}
