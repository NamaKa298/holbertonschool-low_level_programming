#include<stdio.h>
#include"dog.h"
#include<stdlib.h>
#include<string.h>
/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
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
	nouveau_chien->name = malloc(longueur_name * sizeof(char) + 1);
	if (nouveau_chien->name == NULL)
	{
		free(nouveau_chien->name);
		free(nouveau_chien);
		return (NULL);
	}
	while (owner[longueur_owner] != '\0')
		longueur_owner += 1;
	nouveau_chien->owner = malloc(longueur_owner * sizeof(char) + 1);
	if (nouveau_chien->owner == NULL)
	{
		free(nouveau_chien->owner);
		free(nouveau_chien->name);
		free(nouveau_chien);
		return (NULL);
	}
	for (i = 0 ; i <= longueur_name ; i++)
		nouveau_chien->name[i] = name[i];
	for (j = 0 ; j <= longueur_owner ; j++)
		nouveau_chien->owner[j] = owner[j];
	nouveau_chien->age = age;
	return (nouveau_chien);
}
