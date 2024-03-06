/**
 * checker - check the code
 *
 * @n: base number to check
 *
 * Return: Always puissance.
 */
/**
 * is_prime_number - check the code
 *
 * @nombre_diviseur: number is squared and compared against base
 * @valeur_test: base number to check
 *
 * Return: Always puissance.
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
int is_prime_number(int n)
{
	return (checker(n - 1, n));
}
