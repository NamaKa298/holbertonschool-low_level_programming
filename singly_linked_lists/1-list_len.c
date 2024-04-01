#include "lists.h"
/**
 * list_len - Counts the number of elements in a linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 *
 * Description: This function counts the number of elements (nodes) in a
 *              linked list starting from the given head pointer 'h'.
 *              It iterates through the list, incrementing a counter for each
 *              node encountered. The final count represents the total number
 *              of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count += 1;
		h = (*h).next;
	}
	return (count);
}
