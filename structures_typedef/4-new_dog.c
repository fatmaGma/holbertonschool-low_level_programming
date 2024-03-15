#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name string
 * @age: Age of the dog
 * @owner: Pointer to the owner string
 *
 * Return: Pointer to the newly created dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	int name_len, owner_len;
	int i;

	for (name_len = 0; name[name_len]; name_len++)
		;
	for (owner_len = 0; owner[owner_len]; owner_len++)
		;
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);
	new_dog_ptr->name = malloc(name_len + 1);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		new_dog_ptr->name[i] = name[i];
	new_dog_ptr->owner = malloc(owner_len + 1);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
		new_dog_ptr->owner[i] = owner[i];
	new_dog_ptr->age = age;
	return (new_dog_ptr);
}
