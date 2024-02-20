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
		putchar(44);
		putchar(32);
	}
	putchar(57);
	return (0);
}
