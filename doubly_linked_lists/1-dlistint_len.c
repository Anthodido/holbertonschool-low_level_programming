#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Compte le nombre de noeuds dans une liste dlistint_t.
 * @h: Pointeur constant vers le premier noeud de la liste
 *
 * Return: Le nombre de noeuds dans la liste
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
