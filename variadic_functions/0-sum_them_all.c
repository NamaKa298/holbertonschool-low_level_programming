#include"variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters
 * @...: The parameters to sum
 *
 * Return: The sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nombres;
	unsigned int i;
	int somme;

	if (n == 0)
	{
		return (0);
	}
	va_start(nombres, n);
	somme = 0;
	for (i = 0 ; i < n ; i++)
	{
		somme += va_arg(nombres, int);
	}
	va_end(nombres);
	return (somme);
}
