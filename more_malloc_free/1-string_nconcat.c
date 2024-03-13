#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - prints a grid of integers
 * @s1: The character to print
 * @s2: The character to print
 * @n: The character to print
 * Return: character.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n < sizeof(s2))
	{
		concat = malloc(sizeof(s1) + n);
	}
	else
	{
		concat = malloc (sizeof(s1) + sizeof(s2));
	}
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < sizeof(s1) ; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0 ; j < sizeof(s2) && j < n; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
