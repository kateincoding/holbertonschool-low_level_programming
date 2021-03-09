#ifndef DOG_H
# define DOG_H

/**
 * struct dog - Struct of the dog
 * @name: name of dog
 * @age: years old
 * @owner: name of owner dog
 *
 * Description: Structure dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
