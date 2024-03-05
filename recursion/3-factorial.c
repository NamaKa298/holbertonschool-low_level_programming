#include "main.h"
/**
 * factorial - check the code
 *
 * @n: The character to print
 *
 * Return: Always valeur factoriel.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
