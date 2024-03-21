#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - Imprime des valeurs selon le format spécifié.
 * @format: Liste des types d'arguments passés à la fonction.
 * c: char
 * i: integer
 * f: float
 * s: char * (si la chaîne est NULL, imprime (nil) à la place)
 * Tout autre caractère doit être ignoré.
 *
 * Description :
 * Cette fonction imprime des valeurs selon le format spécifié dans la liste
 * des types d'arguments. Les valeurs sont imprimées dans l'ordre où elles
 * sont passées à la fonction. Si la chaîne est NULL, elle imprime (nil).
 * Les autres types de données sont ignorés. La fonction termine par un
 * saut de ligne.
 */
void print_all(const char * const format, ...)
{
	va_list objets;
	int index = 0;
	char *string;
	int format_de_mon_objet;

	va_start(objets, format);
	while (format && format[index])
	{
		format_de_mon_objet = 1;
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(objets, int));
				break;
			case 'i':
				printf("%d", va_arg(objets, int));
				break;
			case 'f':
				printf("%f",  va_arg(objets, double));
				break;
			case 's':
				string = va_arg(objets, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
			default:
				format_de_mon_objet = 0;
				break;
		}
		if (format[index + 1] && format_de_mon_objet)
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(objets);
}
