#include "function_pointers.h"

/**
 * array_iterator - executes a function fiven as a parameter
 * on each element of an array.
 * @array: array to iterate over.
 * @size: size of the array.
 * @action: pointer to function used
 *
 * Return: No return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
