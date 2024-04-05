#include"main.h"
/**
 * clear_bit - Clear the value of a bit to 0 at a given index
 * @n: Pointer to the unsigned long int where the bit will be cleared
 * @index: The index of the bit to clear, starting from 0
 *
 * Description: This function clears the value of the bit at the
 * specified index
 * in the unsigned long int pointed to by n to 0.
 *
 * Return: 1 if the operation succeeded, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int valeur_a_supprimer;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		valeur_a_supprimer = ~(1 << index);
		*n &= valeur_a_supprimer;
		return (1);
	}
}
