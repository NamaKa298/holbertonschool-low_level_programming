#include"main.h"
/**
 * leet - check the code for
 *
 * @str: The character to print
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i, j;

	char letr_min[] = "aeotl";
	char letr_maj[] = "AEOTL";
	char nbre[] = "43071";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; letr_min[j] != '\0' ; j++)
		{
			if (str[i] == letr_min[j] || str[i] ==  letr_maj[j])
			{
				str[i] = nbre[j];
			}
		}
	}
	return(str);
}
