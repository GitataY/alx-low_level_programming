#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase charachter.
 * @c: input character
 * Return: 1 if an uppercase character, 0 in other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
