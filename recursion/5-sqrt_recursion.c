#include "main.h"
/**
 * checker - check the code
 *
 * @racine_probable: number is squared and compared against base
 * @valeur_test: base number to check
 *
 * Return: Always puissance.
 */
int checker(int racine_probable, int valeur_test)
{
	if (racine_probable * racine_probable == valeur_test)
		return (racine_probable);
	if (racine_probable * racine_probable > valeur_test)
		return (-1);
	return (checker(racine_probable + 1, valeur_test));
}
/**
 * _sqrt_recursion - return the natural square root of a number n.
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
