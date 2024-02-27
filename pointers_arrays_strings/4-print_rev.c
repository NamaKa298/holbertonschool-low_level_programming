#include"main.h"

/**
 * print_rev - check the code
 *
 * @s: The character to print
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int longueur, i;

	longueur = 0;

	while (s[longueur] != '\0')
	{
		longueur += 1;
	}
	i = longueur;

	for (i = longueur ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
