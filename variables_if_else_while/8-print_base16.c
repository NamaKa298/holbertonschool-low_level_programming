#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex;

	for (hex = 48 ; hex <= 57 ; hex++)
	{
		putchar(hex);
	}
	for (hex = 97 ; hex <= 102 ; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
