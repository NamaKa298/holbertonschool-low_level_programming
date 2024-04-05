#include"main.h"
/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: Pointer to the unsigned long int where the bit will be set
 * @index: The index of the bit to set, starting from 0
 *
 * Description: This function sets the value of the bit at the specified index
 * in the unsigned long int pointed to by n to 1.
 *
 * Return: 1 if the operation succeeded, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int valeur_a_ajouter;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		valeur_a_ajouter = 1 << index;
		*n += valeur_a_ajouter;

		return (1);
	}
}
