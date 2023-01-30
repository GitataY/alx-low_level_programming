#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @j: singly linked list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *j)
{
	size_t lem;

	lem = 0;

	while (j != NULL)
	{
		j = j->next;
		lem++;
	}
	return (lem);
}
