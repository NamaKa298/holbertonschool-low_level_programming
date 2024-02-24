#include<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int terme1, terme2, terme3;
	int pas;

	terme1 = 1;
	terme2 = 2;

	printf("%ld", terme1);
	printf(", %ld", terme2);
	for (pas = 0 ; pas < 48 ; pas++)
	{
		terme3 = terme1 + terme2;
		printf(", %ld", terme3);
		terme1 = terme2;
		terme2 = terme3;
	}
	printf("\n");
	return ('0');
}
