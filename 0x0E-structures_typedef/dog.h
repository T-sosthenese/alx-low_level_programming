#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Desc: Header file describing struct dog
 */

/**
 * struct dog - A new type describing a dog
 * @name: the name of the dog
 * @age: the dog's age
 * @owner: the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
