#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize *d with entry value
 * @d: Dod structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: success 1; error -1
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
