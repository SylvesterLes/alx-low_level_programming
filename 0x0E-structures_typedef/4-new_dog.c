#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Return: pointer to dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length;
	int owner_length;
	int i;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
	{
		return (NULL);
	}
	name_length = owner_length = 0;
	while (name[name_length++])
		;
	while (owner[owner_length++])
		;
	d1->name = malloc(name_length * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= name_length; i++)
	{
		d1->name[i] = name[i];
	}
	d1->age = age;
	d1->owner = malloc(owner_length * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= owner_length; i++)
	{
		d1->owner[i] = owner[i];
	}
	return (d1);
}
