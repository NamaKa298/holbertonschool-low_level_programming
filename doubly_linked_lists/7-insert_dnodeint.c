#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 * doubly linked list.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index of the list where the new node should be added.
 * @n: The data to be stored in the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *new_node, *current;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*h == NULL || idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	current = *h;
	while (current != NULL && index < idx - 1)
	{
		current = current->next;
		index++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
