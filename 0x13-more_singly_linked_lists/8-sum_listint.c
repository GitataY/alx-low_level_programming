#include "lists.h"

/**
 * sum_listint - returns sum of all the data in a linked list
 * @head: first node
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
