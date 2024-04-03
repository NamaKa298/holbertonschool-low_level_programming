#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 *                            in a doubly linked list.
 * @head: A pointer to the address of the head node.
 * @index: The position of the node to delete.
 *
 * Return: On success, 1. On failure, -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *current = *head;
	dlistint_t *noeud_a_supprimer;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
	}
	while (current != NULL && idx < index - 1)
	{
		current = current->next;
		idx += 1;
	}
	if (current == NULL)
	{
		return (-1);
	}
	noeud_a_supprimer = current->next;
	current->next = noeud_a_supprimer->next;
	if (noeud_a_supprimer->next != NULL)
	{
		noeud_a_supprimer->next = current;
		noeud_a_supprimer->prev = current;
		current->prev = NULL;
	}
	free(noeud_a_supprimer);
	return (1);
}
