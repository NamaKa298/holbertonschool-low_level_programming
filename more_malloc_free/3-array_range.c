#include "main.h"
#include <stdlib.h>
/**
 * array_range - check the code.
 * @min: The character to print
 * @max: the size of the memory to print
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int j = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min ; i <= max ; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
