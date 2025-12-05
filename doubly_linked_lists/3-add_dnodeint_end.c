#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - Ajoute un nouveau noeud a la fin d'une liste dlistint_t.
 * @head: Pointeur vers le pointeur sur la tete de la liste
 * @n: Valeur entiere a stocker dans le nouveau noeud
 *
 * Return: L'adresse du nouveau noeud, ou NULL en cas d'echec
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *tmp;

if (head == NULL)
{
return (NULL);
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
else
{
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new;
new->prev = tmp;
}
return (new);
}
