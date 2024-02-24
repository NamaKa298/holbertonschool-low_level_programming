#include<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int terme1, terme2, terme3;

	terme1 = 1;
	terme2 = 2;

	printf("%d", terme1);
	printf("%d", terme2);
	while (terme1 + terme2 < 50)
	{
		terme3 = terme1 + terme2;
		printf(", %d", terme3);
		terme1 = terme2;
		terme2 = terme3;
	}
	printf("\n");
	return ('0');
}
