#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer to the struct dog variable to initialize
 * @name: Pointer to a string representing the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a string representing the dog's owner
 *
 * Description: This function initializes a variable of type struct dog
 * with the provided parameters: name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
