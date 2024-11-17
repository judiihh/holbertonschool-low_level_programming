#include "dog.h"
#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog to initialize.
 * @name: Pointer to the name to assign.
 * @age: Age to assign.
 * @owner: Pointer to the owner's name to assign.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
