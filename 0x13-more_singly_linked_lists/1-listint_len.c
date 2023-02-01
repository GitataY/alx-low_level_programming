#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head, first node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t modes = 0;

	while (h != NULL)
	{
		h = h->next;
		modes++;
	}
	return (modes);
}
