#include<stdio.h>
/**
 * main - check the code
 *
 * Return: Always somme (success).
 */


int main(void)
{
	int nombre_max = 1023;
	int valeur_a_garder, somme, i;

	somme = 0;
	valeur_a_garder = 0;
		for (i = 0 ; i <= nombre_max ; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				valeur_a_garder = i;
				somme += valeur_a_garder;
			}
		}
	printf("%d\n", somme);
	return (1);
}

