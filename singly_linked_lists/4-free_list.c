#include"lists.h"
/**
 * free_list - Frees a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Description: This function frees the memory allocated for each node
 * of a linked list starting from the given head node.
 */
void free_list(list_t *head)
{
	list_t *next_node;

	if (!head)
	{
		return;
	}
	while (head)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
