#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Alloue la mémoire pour un tableau et initialise à zéro.
 * @nmemb: Nombre d'éléments du tableau.
 * @size: Taille en octets de chaque élément.
 *
 * Description:
 * Cette fonction alloue un espace mémoire pour un tableau contenant
 * @nmemb éléments, chacun de taille @size octets. La mémoire allouée
 * est initialisée à zéro. Si nmemb ou size vaut 0, ou si l'allocation
 * échoue, la fonction retourne NULL.
 *
 * Return:
 * Un pointeur vers la mémoire allouée initialisée à 0,
 * ou NULL si l'allocation échoue ou si nmemb ou size vaut 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int total;
unsigned int i;
char *p;

if (nmemb == 0 || size == 0)
return (NULL);

total = nmemb * size;

p = malloc(total);
if (p == NULL)
return (NULL);

for (i = 0; i < total; i++)
{
p[i] = 0;
}
return (p);
}