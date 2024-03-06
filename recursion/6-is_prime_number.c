#include "main.h"
/**
 * checker - check the code
 *
 * @nombre_diviseur: The character to print
 * @valeur_test: The character to print
 *
 * Return: Always int.
 */
int checker(int nombre_diviseur, int valeur_test)
{
	if (valeur_test <= 1)
	{
		return (0);
	}
	else if (nombre_diviseur == 1)
	{
		return (1);
	}
	else if (valeur_test % nombre_diviseur == 0)
	{
		return (0);
	}
	else
	{
		return (checker(nombre_diviseur - 1, valeur_test));
	}
}

/**
 * is_prime_number - check the code
 *
 * @n: The character to print
 *
 * Return: Always int.
 */
int is_prime_number(int n)
{
	return (checker(n - 1, n));
}
