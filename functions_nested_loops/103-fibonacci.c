#include<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int terme1, terme2, terme3;

	terme1 = 1;
	terme2 = 2;
	terme3 = 0;

	printf("%ld", terme2);
	while (terme3 < 4000000)
	{

		terme3 = terme1 + terme2;
		if (terme3 % 2 == 0)
		{
			printf(", %ld", terme3);
		}
		terme1 = terme2;
		terme2 = terme3;
	}
printf("\n");
return (0);
}
