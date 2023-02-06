#include "main.h"

/**
 * get_endianness - checks endianness of  value
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y;
	char *k;

	y = 1;
	k = (char *) &y;

	return ((int)*k);
}
