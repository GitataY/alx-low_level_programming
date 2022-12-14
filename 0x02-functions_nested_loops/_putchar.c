#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character _putchar to stdout
 * Return: On Success 1.
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
