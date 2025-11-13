#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialise une variable de type struct dog.
 * @d: Pointeur vers la structure à initialiser.
 * @name: Nom du chien.
 * @age: Âge du chien.
 * @owner: Propriétaire du chien.
 *
 * Return: Rien.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
