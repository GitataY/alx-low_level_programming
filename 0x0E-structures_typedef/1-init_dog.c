#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: struct dog
 * @name: name of the dog.
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: No return
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
