#include<stdio.h>
#include"dog.h"
#include<stdlib.h>
#include<string.h>
/**
 * new_dog - Creates a new dog structure
 *
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the owner
 *
 * Description:
 *   This function creates a new dog structure with the given name,
 *   age, and owner.
 *   It allocates memory for the new structure and copies the name
 *   and owner strings.
 *   Returns a pointer to the newly created dog structure if successful,
 *   or NULL if memory allocation fails.
 *
 * Return:
 *   Pointer to the newly created dog structure or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nouveau_chien;
	int longueur_name = 0;
	int longueur_owner = 0;
	int i, j;

	nouveau_chien = malloc(sizeof(dog_t));
	if (nouveau_chien == NULL)
	{
		free(nouveau_chien);
		return (NULL);
	}
	while (name[longueur_name] != '\0')
		longueur_name += 1;
	(*nouveau_chien).name = malloc(longueur_name * sizeof(char) + 1);
	if ((*nouveau_chien).name == NULL)
	{
		free((*nouveau_chien).name);
		free(nouveau_chien);
		return (NULL);
	}
	while (owner[longueur_owner] != '\0')
		longueur_owner += 1;
	(*nouveau_chien).owner = malloc(longueur_owner * sizeof(char) + 1);
	if ((*nouveau_chien).owner == NULL)
	{
		free((*nouveau_chien).owner);
		free((*nouveau_chien).name);
		free(nouveau_chien);
		return (NULL);
	}
	for (i = 0 ; i <= longueur_name ; i++)
		(*nouveau_chien).name[i] = name[i];
	for (j = 0 ; j <= longueur_owner ; j++)
		(*nouveau_chien).owner[j] = owner[j];
	(*nouveau_chien).age = age;
	return (nouveau_chien);
}
