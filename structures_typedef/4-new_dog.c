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
	int longueur_name, longueur_owner, i, j;

	if (name == NULL || owner == NULL)
		return (NULL);
	nouveau_chien = malloc(sizeof(dog_t));
	if (nouveau_chien == NULL)
	{
		free(nouveau_chien);
		return (NULL);
	}
	while (*name != '\0')
		longueur_name += 1;
	nouveau_chien->name = malloc((longueur_name + 1) * sizeof(char));
	if (nouveau_chien->name == NULL)
	{
		free(nouveau_chien->name);
		free(nouveau_chien);
		return (NULL);
	}
	while (*owner != '\0')
		longueur_owner += 1;
	nouveau_chien->owner = malloc((longueur_owner + 1) * sizeof(char));
	if (nouveau_chien->owner == NULL)
	{
		free(nouveau_chien->owner);
		free(nouveau_chien->name);
		free(nouveau_chien);
		return (NULL);
	}
	for (i = 0 ; i <= longueur_name ; i++)
		nouveau_chien->name[i] = name[i];
	nouveau_chien->name[i] = '\0';
	for (j = 0 ; j <= longueur_owner ; j++)
		nouveau_chien->owner[j] = owner[j];
	nouveau_chien->owner[i] = '\0';
	nouveau_chien->age = age;
	return (nouveau_chien);
}
