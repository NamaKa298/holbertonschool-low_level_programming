#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The integer value to be added to the new node.
 *
 * Description:
 * This function adds a new node containing the specified integer 'n'
 * at the beginning of the doubly linked list pointed to by 'head'.
 * If memory allocation fails, it returns NULL. Otherwise, it returns
 * a pointer to the newly created node.
 *
 * Return:
 * On success, a pointer to the newly created node.
 * On failure, NULL if memory allocation fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nouveau_noeud;

	nouveau_noeud = malloc(sizeof(dlistint_t));
	if (nouveau_noeud == NULL)
	{
		return (NULL);
	}
	nouveau_noeud->n = n;
	nouveau_noeud->next = *head;
	nouveau_noeud->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = nouveau_noeud;
	}
	*head = nouveau_noeud;
	return (nouveau_noeud);
}
