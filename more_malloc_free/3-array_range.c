#include <stdlib.h>
#include "main.h"
/**
 * array_range - Crée un tableau d'entiers de min à max.
 * @min: Valeur minimale.
 * @max: Valeur maximale.
 *
 * Return: Pointeur vers le tableau créé, ou NULL en cas d’erreur.
 */
int *array_range(int min, int max)
{
int size, i;
int *crs;

if (min > max)
return (NULL);

size = (max - min) + 1;

crs = malloc(size * sizeof(int));
if (crs == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
crs[i] = min + i;
}
return (crs);
}
