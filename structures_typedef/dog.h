#include"main.h"
/**
 * init_dog - nada
 * @d: variable
 * @age: variable
 * @owner: variable
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
