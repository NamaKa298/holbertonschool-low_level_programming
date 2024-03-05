#include "main.h"
#include<stdio.h>
/**
 * print_diagsums - check the code
 *
 * @a: The character to print
 * @size: The character to print
 *
 * Return: Always nothing.
 */
void print_diagsums(int *a, int size)
{
	int i;

	int sommediag1 = 0;
	int sommediag2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sommediag1 += a[size * i + i];
	}
	for (i = 1 ; i <= size ; i++)
	{
		sommediag2 += a[size * i - i];
	}
	printf("%d, %d\n", sommediag1, sommediag2);
}
