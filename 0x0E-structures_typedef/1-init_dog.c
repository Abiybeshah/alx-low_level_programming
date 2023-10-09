#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initiates a variable of type struct dog
* @d: a structure
* @name: input for name
* @age: input for age
* @owner: input for owner
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
