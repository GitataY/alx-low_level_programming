#include "main.h"
/**
 * _strncat - it concatenates two strings.
 * @dest: the destination string we are to append.
 * @src: the source string we add to.
 * @n: the number of bytes from src to concatenate
 * Return: The pointer to the resulting destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

