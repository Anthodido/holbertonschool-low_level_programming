#include <stddef.h>
#include "lists.h"
/**
 * sum_dlistint - Calcule la somme de tous les n d'une liste dlistint_t.
 * @head: Pointeur vers le premier noeud de la liste
 *
 * Return: La somme de toutes les valeurs n,
 * ou 0 si la liste est vide
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
{
return (0);
}
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
