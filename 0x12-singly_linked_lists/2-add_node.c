#include "lists.h"

/**
 * add_node - adds a new node to a list
 * @head: first node
 * @str: string storing the list
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nnew;
	size_t mchar;

	nnew = malloc(sizeof(list_t));
	if (nnew == NULL)
		return (NULL);

	nnew->str = strdup(str);

	for (mchar = 0; str[mchar]; mchar++)
		;
	nnew->len = mchar;
	nnew->next = *head;
	*head = nnew;

	return (*head);
}
