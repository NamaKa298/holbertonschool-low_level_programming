#include"dog.h"
#include<stdlib.h>
/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to free
 *
 * This function frees the memory previously allocated for a dog structure.
 * It takes a pointer to the dog structure as its parameter.
 */
void free_dog(dog_t *d)
{
	if (!d)
	{
		return;
	}
	free((*d).owner);
	free((*d).name);
	free(d);
}
