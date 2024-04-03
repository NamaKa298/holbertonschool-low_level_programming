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
	dlistint_t *temp;
	dlistint_t *new_node;
	unsigned int count;

	temp = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->n = n;
	if (idx == 0)
	{
		*h = new_node;
		return (new_node);
	}
	else
	{
		count = 0;
		while (temp != NULL && count != idx - 1)
		{
			temp = temp->next;
			count++;
		}
		if (count != idx - 1)
		{
			return (NULL);
		}
		temp->next = new_node;
		new_node->next = temp;
		new_node->prev = temp;
		return (new_node);
	}
}
