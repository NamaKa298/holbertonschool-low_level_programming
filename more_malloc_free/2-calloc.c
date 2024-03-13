#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - check the code.
 * @nmemb: The character to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * sizeof(size));
	if (p == NULL)
		return (NULL);
	return (p);
}
