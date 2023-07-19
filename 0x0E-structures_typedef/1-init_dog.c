#include "dog.h"

/**
 * init_dog- initialize struct dog.
 * @d: dog variable.
 * @name: name of dog.
 * @age: dog age.
 * @owner: dog owner.
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
