#include "variadic_functions.h"
#include<stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Description: This function prints a variable number of integers,
 * separated by a specified separator, with the option to omit the
 * separator if it's NULL, and then prints a newline character.
 * It uses printf for printing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valeurs;
	unsigned int i;

	va_start(valeurs, n);
	for (i = 0 ; i < n ; i++)
	{
		if (i == 0 || separator == NULL)
		{
			printf("%d", va_arg(valeurs, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(valeurs, int));
		}
	}
	printf("\n");
	va_end(valeurs);
}
