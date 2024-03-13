#include "main.h"
#include <stdlib.h>
/**
 * _calloc - check the code.
 * @nmemb: The character to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < nmemb * size ; i++)
	{
		p[i] = 0;
	}
	return (p);
}
