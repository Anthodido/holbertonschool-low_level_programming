#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - supprime le nœud à un index donné
 *                            dans une liste doublement chaînée dlistint_t
 * @head: double pointeur vers le début de la liste
 * @index: indice du nœud à supprimer (en commençant à 0)
 *
 * Return: 1 en cas de succès, -1 en cas d'échec
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

for (i = 0; current != NULL && i < index; i++)
current = current->next;

if (current == NULL)
return (-1);

if (current->next != NULL)
current->next->prev = current->prev;
if (current->prev != NULL)
current->prev->next = current->next;

free(current);

return (1);
}
