#include "main.h"
#include <stdlib.h>
/**
 * array_range - check the code.
 * @min: The character to print
 * @max: the size of the memory to print
 * Return: Nothing.
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
	p = malloc(sizeof(int) * (max - min + 2));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min ; i <= max ; i++)
	{
		p[j] = i;
		j++;
	}
	p[j] = '\0';
	return (p);
}
