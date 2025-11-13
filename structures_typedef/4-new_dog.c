#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Crée un nouveau chien.
 * @name: Nom du chien.
 * @age: Âge du chien.
 * @owner: Propriétaire du chien.
 *
 * Return: Pointeur vers le nouveau chien ou NULL si échec.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int len_n = 0, len_o = 0, i, j;
dog_t *dup;
char *cn;
char *co;

dup = malloc(sizeof(dog_t));
if (dup == NULL)
return (NULL);

if (name == NULL)
name = "";

if (owner == NULL)
owner = "";

while (name[len_n] != '\0')
{
len_n++;
}
while (owner[len_o] != '\0')
{
len_o++;
}
cn = malloc(len_n + 1);
if (cn == NULL)
{
free(dup);
return (NULL);
}

co = malloc(len_o + 1);
if (co == NULL)
{
free(cn);
free(dup);
return (NULL);
}
for (i = 0; i < len_n; i++)
{
cn[i] = name[i];
}
for (j = 0; j < len_o; j++)
{
co[j] = owner[j];
}
cn[len_n] = '\0';
co[len_o] = '\0';

dup->name = cn;
dup->age = age;
dup->owner = co;

return (dup);
}
