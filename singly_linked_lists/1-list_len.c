#include <stdio.h>
#include "lists.h"
/**
 * list_len - Compte le nombre de noeuds dans une liste de type list_t.
 * @h: Pointeur constant vers la tete de la liste chainee
 *
 * Return: Le nombre de noeuds dans la liste
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
