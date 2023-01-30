#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @j: singly linked list
 * Return: number of elements in the list
 */
size_t print_list(const list_t *j)
{
	size_t lem;

	lem = 0;

	while (j != NULL)
	{
		if (j->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", j->len, j->str);
		j = j->next;
		lem++;
	}
	return (lem);
}
