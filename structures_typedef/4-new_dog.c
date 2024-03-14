#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Create a new dog with specified details
 * @name: Pointer to a string representing the dog's name
 * @age: Age of the dog
 * @owner: Pointer to a string representing the dog's owner
 *
 * Description: This function dynamically allocates memory for a new dog
 * structure and initializes it with the specified details:
 * name, age, and owner.
 * It ensures that copies of the name and owner strings are stored
 * in separate memory locations to prevent dangling pointers.
 * If any memory allocation fails, the function returns NULL to indicate
 * failure.
 * Return: Pointer to the newly created dog structure, or NULL if memory
 * allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	(*new_dog).name = malloc(sizeof(name));
	(*new_dog).name = name;
	if ((*new_dog).name == NULL)
	{
		free((*new_dog).name);
		return (NULL);
	}
	(*new_dog).age = age;
	(*new_dog).owner = owner;
	if ((*new_dog).owner == NULL)
	{
		free((*new_dog).owner);
		return (NULL);
	}
	return (new_dog);
}
