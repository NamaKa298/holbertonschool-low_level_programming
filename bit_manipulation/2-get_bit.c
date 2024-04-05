#include "main.h"
/**
 * get_bit - Obtient la valeur du bit à un index donné
 * @n: Le nombre dont on veut obtenir le bit
 * @index: L'index du bit à obtenir, à partir de 0
 *
 * Description: Cette fonction retourne la valeur du bit à l'index spécifié
 * dans le nombre donné.
 *
 * Return: La valeur du bit à l'index donné (0 ou 1), ou -1 en cas d'erreur.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int masque;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	masque = 1 << index;
	return ((n & masque) != 0);
}
