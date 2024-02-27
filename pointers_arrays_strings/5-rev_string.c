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
	int longueur, i, temporaire;

	longueur = 0;

	while (s[longueur] != '\0')
	{
		longueur += 1;
	}
	for (i = 0 ; i < longueur / 2 ; i++)
	{
		temporaire = s[i];
			s[i] = s[longueur - i - 1];
		s[longueur - i - 1] = temporaire;

	}
}
