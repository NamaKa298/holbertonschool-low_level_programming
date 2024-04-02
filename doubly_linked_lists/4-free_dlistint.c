#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list of integers.
 * @head: Pointer to the head of the list.
 *
 * This function frees the memory allocated for each node in a
 * doubly linked list of integers, starting from the head.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	if (!head)
	{
		return;
	}
	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
