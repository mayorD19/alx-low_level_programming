#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - new struct for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: true
 */


typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_d;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_d *new_dog(char *name, float age, char *owner);
void free_dog(dog_d *d);

#endif
