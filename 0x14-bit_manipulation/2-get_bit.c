#include "main.h"

/**
 * get_bit - returns a value of a bit of a given index
 * @n:bit we are to return
 * @index: index of the bit value
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 64)
		return (0);

	for (j = 0; j <= 63; n >>= 1, j++)
	{
		if (index == j)
		{
			return (n & 1);
		}
	}
	return (-1);
}
