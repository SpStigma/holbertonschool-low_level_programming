#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: chiot
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *chiot;
	int lenght1 = 0;
	int lenght2 = 0;

	chiot = malloc(sizeof(dog_t));
	if (chiot == NULL)
	{
		return (NULL);
	}
	while (name[lenght1] != '\0')
	{
		lenght1++;
	}
	while (owner[lenght2] != '\0')
	{
		lenght2++;
	}
	chiot->name = malloc(sizeof(char) * (lenght1 + 1));
	if (chiot->name == NULL)
	{
		free(chiot);
		return (NULL);
	}
	chiot->owner = malloc(sizeof(char) * (lenght2 + 1));
	if (chiot->owner == NULL)
	{
		free(chiot->name);
		free(chiot);
		return (NULL);
	}
	strcpy(chiot->name, name);
	strcpy(chiot->owner, owner);
	chiot->age = age;
	return (chiot);
}
