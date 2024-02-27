#include"main.h"
/**
 * rev_string - check the code
 *
 * @s: The character to print
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int longueur, i;

	longueur = 0;

	while (s[longueur] != '\0')
	{
		longueur += 1;
	}
	i = longueur;

	for (i = longueur - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
