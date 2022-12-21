#include "main.h"
/**
 * _strcat - It concatenates two strings.
 * @dest: the destination string we append to.
 * @src: the source string we add to.
 * Return: A pointer to dest, i.e the resulting string
 */


char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		1++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
