#include"main.h"
/**
 * flip_bits - Calculate the number of bits needed to flip to get from
 * one number to another
 * @n: The first number
 * @m: The second number
 *
 * Description: This function calculates the number of bits that need to
 * be flipped
 * in order to transform one number into another.
 *
 * Return: The number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits_de_difference = 0, bits_a_comparer = n ^ m;

	while (bits_a_comparer)
	{
		bits_de_difference += bits_a_comparer & 1;
		bits_a_comparer >>= 1;
	}
	return (bits_de_difference);
}
