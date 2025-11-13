#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Affiche les informations d'une structure dog.
 * @d: Pointeur vers la structure à afficher.
 *
 * Description:
 * Si un des éléments de la structure est NULL,
 * la fonction affiche (nil) à la place.
 * Si le pointeur d est NULL, la fonction ne fait rien.
 *
 * Return: Rien.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);

if (d->age < 0)
printf("Age: (nil)\n");
else
printf("Age: %f\n", d->age);

if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
