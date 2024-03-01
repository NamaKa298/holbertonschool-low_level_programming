#include "main.h"
/**
 * reverse_array - print an array of integers
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, temporaire;

	for (i = 0 ; i < n / 2 ; i++)
	{
		temporaire = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temporaire;
	}
}
