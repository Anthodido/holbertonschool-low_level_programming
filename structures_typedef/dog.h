#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
