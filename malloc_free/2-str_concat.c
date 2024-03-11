#include<stdlib.h>
#include"main.h"
#include<stdio.h>
/**
 * _strlen - check the code
 * @s: The character to print
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int longueur;
	longueur = 0;

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

	unsigned int i, j, len1, len2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	phrase_complete = malloc(sizeof(char) * (len1 + len2 + 1));
	if (phrase_complete == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		phrase_complete[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		phrase_complete[i + j] = s2[j];
		j++;
	}
	phrase_complete[i + j] = '\0';
	return (phrase_complete);
}
