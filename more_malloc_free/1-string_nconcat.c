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
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1 += 1;
	while (s2[len2] != '\0')
		len2 += 1;
	if (n < len2)
	{
		concat = malloc(sizeof(char) * len1 + n + 1);
	}
	else
	{
		concat = malloc(sizeof(char) * (len1 + len2) + 1);
	}
	if (concat == NULL)
		return (NULL);
	for (i = 0 ; i < len1 ; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0 ; j < len2 && j < n; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
