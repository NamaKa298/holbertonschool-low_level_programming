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
		concat = malloc(sizeof(s1) + n * sizeof(s2));
	}
	else
	{
		concat = malloc (sizeof(s1) + sizeof(s2));
	}
	if (concat == NULL)
	{
		return (NULL);
	}
	return (concat);
}
