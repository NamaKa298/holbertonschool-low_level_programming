#include "lists.h"
/**
 * get_dnodeint_at_index - Retrieve a node at a specific index in a
 * doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: An unsigned integer representing the index of the node to retrieve.
 *
 * Return: A pointer to the node at the specified index. If the index is
 * out of range
 * or the list is empty, returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index > 0)
	{
		head = (*head).next;
		index--;
	}
	return (head);
}
