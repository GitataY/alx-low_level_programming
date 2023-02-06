#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointer to string of chars 0 and 1
 * Return: coverted number, 0 if not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u;
	int length, base2;

	if (!b)
		return (0);

	u = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base2 = 1; length >= 0; length--, base2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			u += base2;
		}
	}

	return (u);
}
