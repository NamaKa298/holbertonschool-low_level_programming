#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sd;

	for (sd = 48 ; sd <= 56 ; sd++)
	{
		putchar(sd);
		putchar(',');
		putchar(' ');
	}
	putchar(57);
	return (0);
}
