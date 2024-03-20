#include "variadic_functions.h"
#include<stdarg.h>
#include <stdio.h>
/**
 * print_strings - Imprime les chaînes de caractères suivies d'un saut
 * de ligne.
 * @separator: La chaîne à imprimer entre les chaînes de caractères.
 * @n: Le nombre de chaînes de caractères passées à la fonction.
 *
 * Description :
 * Cette fonction imprime les chaînes de caractères passées en paramètres,
 * en les séparant par la chaîne spécifiée. Si une des chaînes est NULL,
 * elle imprime "(nil)" à la place. La fonction termine par un saut de ligne.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list caracteres;
	unsigned int i;
	char *caractere_traite;

	va_start(caracteres, n);
	for (i = 0 ; i < n ; i++)
	{
		caractere_traite = va_arg(caracteres, char *);
		if (caractere_traite == NULL)
		{
			if (i == 0 || separator == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s(nil)", separator);
			}
		}
		else if (i == 0 || separator == NULL)
		{
			printf("%s", caractere_traite);
		}
		else
		{
			printf("%s%s", separator, caractere_traite);
		}
	}
	printf("\n");
	va_end(caracteres);
}
