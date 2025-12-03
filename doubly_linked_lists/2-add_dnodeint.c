#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - Ajoute un nouveau noeud au debut d'une liste dlistint_t.
 * @head: Pointeur vers le pointeur sur la tete de la liste
 * @n: Valeur entiere a stocker dans le nouveau noeud
 *
 * Return: L'adresse du nouveau noeud, ou NULL en cas d'echec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

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
new->prev = NULL;
new->next = *head;

if (*head != NULL)
{
(*head)->prev = new;
}
*head = new;
return (new);
}
