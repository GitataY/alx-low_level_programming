#include <stdio.h>

/**
 * xmain - a function executed before main is executed
 * Return: no return
 */
void __attribute__ ((constructor)) xmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
