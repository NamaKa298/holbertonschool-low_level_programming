#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - prints a grid of integers
 * @b: The character to print
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(b));
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
