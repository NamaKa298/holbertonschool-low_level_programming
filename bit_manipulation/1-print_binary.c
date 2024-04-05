#include"main.h"
/**
 * print_binary - Prints the binary representation of an unsigned long int
 * @n: The number to print in binary
 *
 * Description: This function prints the binary representation of the
 * given unsigned long integer to the standard output.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
