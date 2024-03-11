#include<stdlib.h>
#include"main.h"
/**
 * _strlen - check the code
 * @s: The character to print
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int longueur = 0;

	while (s[longueur] != '\0')
	{
		longueur += 1;
	}
	return (longueur);
}
/**
 * str_concat - check the code
 * @s1: The character to print
 * @s2: The character to print
 * Return: character.
 */
char *str_concat(char *s1, char *s2)
{
	char *phrase_complete;
	int i = 0;
	int j = 0;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);

	phrase_complete = malloc(sizeof(char) * (len1 + len2 + 1));
	if (phrase_complete == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		phrase_complete[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		phrase_complete[i + j] = s2[j];
		j++;
	}
	phrase_complete[i + j] = '\0';
	return (phrase_complete);
}
