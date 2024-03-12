#include<stdlib.h>
#include"main.h"
/**
 * str_concat - check the code
 * @s1: The character to print
 * @s2: The character to print
 * Return: character.
 */
char *str_concat(char *s1, char *s2)
{
	char *phrase_complete;
	int i, j;
	int len1 = 0;
	int len2 = 0;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1 += 1;
	}
	while (s2[len2] != '\0')
	{
		len2 += 1;
	}
	phrase_complete = malloc(sizeof(char) * (len1 + len2 + 1));
	if (phrase_complete == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < len1 ; i++)
	{
		phrase_complete[i] = s1[i];
	}
	for (j = 0 ; j < len2 ; j++)
	{
		phrase_complete[i + j] = s2[j];
	}
	return (phrase_complete);
}
