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
	dlistint_t *nouveau_noeud, *current;

	nouveau_noeud = malloc(sizeof(dlistint_t));
	if (h == NULL)
	{
		return (NULL);
	}
	nouveau_noeud->n = n;
	if (*h == NULL || idx == 0)
	{
		add_dnodeint(h, n);
	}
	current = *h;
	while (current != NULL && index < idx - 1)
	{
		current = current->next;
		index++;
	}
	if (current == NULL)
	{
		free(nouveau_noeud);
		return (NULL);
	}
	nouveau_noeud->next = current->next;
	nouveau_noeud->prev = current;
	if (current->next != NULL)
		current->next->prev = nouveau_noeud;
	current->next = nouveau_noeud;
	return (nouveau_noeud);
}
