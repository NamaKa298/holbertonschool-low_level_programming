#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the dlistint_t list.
 * @n: The integer value to be added to the new node.
 *
 * Description:
 * This function adds a new node containing the specified integer 'n'
 * at the end of the doubly linked list pointed to by 'head'.
 * If memory allocation fails, it returns NULL. Otherwise, it returns
 * a pointer to the newly created node.
 *
 * Return:
 * On success, a pointer to the newly created node.
 * On failure, NULL if memory allocation fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nouveau_noeud;
	dlistint_t *current = *head;

	nouveau_noeud = malloc(sizeof(dlistint_t));
	if (nouveau_noeud == NULL)
	{
		return (NULL);
	}
	nouveau_noeud->n = n;
	nouveau_noeud->next = NULL;
	if (*head == NULL)
	{
		nouveau_noeud->prev = NULL;
		*head = nouveau_noeud;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = nouveau_noeud;
		nouveau_noeud->prev = current;
	}
	return (nouveau_noeud);
}
