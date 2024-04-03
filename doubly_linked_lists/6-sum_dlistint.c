#include"lists.h"
/**
 * sum_dlistint - Computes the sum of all the data (n) of a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The sum of all the data (n) of the linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
