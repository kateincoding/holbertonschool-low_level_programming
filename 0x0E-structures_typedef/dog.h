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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
