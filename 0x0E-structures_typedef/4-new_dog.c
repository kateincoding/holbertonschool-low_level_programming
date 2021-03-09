#include "dog.h"
#include <stdlib.h>

/**
*_strlen - returns the length of a string
*@s: array
*Return: length
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
*_strcpy - function that copies the string pointed
*@dest: pointer to array
*@src: source array to copy
*Return: char dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	if (src[i] != '\0')
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

/**
*new_dog - structure copy
*@name: new name to assign
*@age: age
*@owner: owner to create a new struct
*Return: dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog)
	{
		n_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
		if (n_dog->name)
		{
			n_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
			if (n_dog->owner)
			{
				_strcpy(n_dog->name, name);
				_strcpy(n_dog->owner, owner);
				n_dog->age = age;
				return (n_dog);
			}
			else
			{
				free(n_dog->name);
				free(n_dog);
			}
		}
		else
			free(n_dog);

	}
	return (NULL);
}
