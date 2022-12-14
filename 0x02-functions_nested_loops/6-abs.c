#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes an absolute value
 * of an integer
 *
 * @i: input number as an integer.
 *
 * Return: Absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
