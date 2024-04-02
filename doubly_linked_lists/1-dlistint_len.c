#include "lists.h"
/**
 * dlistint_len - Counts the number of elements in a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Description:
 * This function counts the number of elements in a doubly linked list
 * starting from the given head node 'h'. It traverses the list and counts
 * each node. It returns the total number of nodes in the list.
 *
 * Return:
 * The number of nodes in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
