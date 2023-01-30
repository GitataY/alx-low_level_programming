#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list
 * @head: first node
 * @str: string storing the list
 * Return: address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnew, *temp;
	size_t mchar;

	nnew = malloc(sizeof(list_t));
	if (nnew == NULL)
		return (NULL);

	nnew->str = strdup(str);

	for (mchar = 0; str[mchar]; mchar++)
		;

	nnew->len = mchar;
	nnew->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = nnew;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nnew;
	}

	return (*head);
}
