#include "main.h"
/**
 * binary_to_uint - Convertit une chaîne binaire en un entier non signé
 * @b: Chaîne de caractères binaire
 *
 * Description: Cette fonction prend une chaîne de caractères binaire
 * et la convertit en un entier non signé.
 *
 * Return: L'entier non signé représentant la valeur binaire.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int valeur_convertie = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		valeur_convertie = valeur_convertie * 2 + (*b - '0');
		b++;
	}
	return (valeur_convertie);
}
