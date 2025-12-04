#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Insere un nouveau noeud a un index donne.
 * @h: Pointeur vers le pointeur sur la tete de la liste
 * @idx: Index ou inserer le nouveau noeud (en commencant a 0)
 * @n: Valeur entiere a stocker dans le nouveau noeud
 *
 * Return: L'adresse du nouveau noeud, ou NULL en cas d'echec
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *tmp;
unsigned int i;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;

if (idx == 0)
{
new->prev = NULL;
new->next = *h;

if (*h != NULL)
{
(*h)->prev = new;
}
*h = new;
return (new);
}

tmp = *h;
for (i = 0; tmp != NULL && i < idx -1; i++)
{
tmp = tmp->next;

if (tmp == NULL)
{
free(new);
return (NULL);
}
}
new->next = tmp->next;
new->prev = tmp;
if (tmp->next != NULL)
{
tmp->next->prev = new;
}
tmp->next = new;
return (new);
}
