#ifndef DOG_H
#define DOG_H

/**
 * file: dog.h
 *
 * Desc: header file that defines a new type dog
 */

/**
 * struct dog - a new type describing a dog
 *
 * @name: the name of the dog
 *
 * @age: the age of the dog
 *
 * @owner: the owner of the dog
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
