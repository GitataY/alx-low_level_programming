#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: input the number
 *
 * Return: 1 if is a number between 0 to 9, else 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
