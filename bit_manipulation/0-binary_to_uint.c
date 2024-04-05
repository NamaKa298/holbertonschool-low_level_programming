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
	unsigned int len = 0, nombre_converti = 0, i, j, puissance;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		if (b[len] == '0' || b[len] == '1')
		{
			len++;
		}
		else
		{
			return (0);
		}
	}
	b -= len;
	for (i = 0; i < len; i++)
	{
		puissance = 1;
		for (j = 0; j < len - i - 1; j++)
		{
			puissance *= 2;
		}
		nombre_converti += puissance * (b[i] - '0');
	}
	return (nombre_converti);
}
