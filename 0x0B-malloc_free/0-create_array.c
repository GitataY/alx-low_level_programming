#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: the char we are to initialize to
 * Return: returns the pointer of an array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size ++ 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i+ +)
		cr[i] = c;

	return (cr);
}
