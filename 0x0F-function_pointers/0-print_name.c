#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints out a name
 * @name: name to print out i.e input name
 * @f: pointer to the printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
