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
	dlistint_t *current = *h;
	dlistint_t *nouveau_noeud;

	nouveau_noeud = malloc(sizeof(dlistint_t));
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (current && index < idx - 1)
	{
		current = current->next;
		index++;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	nouveau_noeud = add_dnodeint(&(current->next), n);
	return (nouveau_noeud);
}
