#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - Libere une liste chainee de type dlistint_t.
 * @head: Pointeur vers le premier noeud de la liste
 *
 * Return: Rien
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

while (head != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}

return;
}
