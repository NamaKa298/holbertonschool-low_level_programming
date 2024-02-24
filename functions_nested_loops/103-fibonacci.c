#include<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int terme1, terme2, terme3, somme_des_termes_pairs;

	terme1 = 1;
	terme2 = 2;
	terme3 = 0;
	somme_des_termes_pairs = 2;
	while (terme3 < 4000000)
	{

		terme3 = terme1 + terme2;
		if (terme3 % 2 == 0)
		{
			somme_des_termes_pairs += terme3;
		}
		terme1 = terme2;
		terme2 = terme3;
	}
printf("%ld\n", somme_des_termes_pairs);
return (0);
}
