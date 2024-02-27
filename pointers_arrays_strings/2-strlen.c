#include"main.h"
/**
 * _strlen - check the code
 *
 * @s: The character to print
 *
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
