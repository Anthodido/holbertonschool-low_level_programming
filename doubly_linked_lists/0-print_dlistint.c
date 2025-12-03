#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - Affiche tous les elements d'une liste dlistint_t.
 * @h: Pointeur constant vers le premier noeud de la liste doublement chainee
 *
 * Return: Le nombre de noeuds presents dans la liste
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
