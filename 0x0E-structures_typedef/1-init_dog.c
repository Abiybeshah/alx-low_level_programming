#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initalizes a variable struct of type dog
* @d: pointer to struct dog
* @name: name to init
* @age: age to init
* @owner: owner to init
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
