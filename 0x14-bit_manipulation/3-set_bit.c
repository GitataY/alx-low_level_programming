#include "main.h"

/**
 * set_bit - sets a value of a bit to 1 at a given index
 * @index: index we want to set
 * @n: pointer to number we are setting the bit
 * Return: 1 if successful, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;
	*n = (*n | k);

	return (1);
}
