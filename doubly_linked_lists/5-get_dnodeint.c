#include <stddef.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Retourne le noeud a un index donne dans une liste.
 * @head: Pointeur vers le premier noeud de la liste dlistint_t
 * @index: Index du noeud a recuperer (en commencant a 0)
 *
 * Return: Pointeur vers le noeud a l'index donne,
 *         ou NULL si le noeud n'existe pas
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp;
unsigned int i = 0;

if (head == NULL)
{
return (NULL);
}
tmp = head;
while (tmp != NULL && i < index)
{
tmp = tmp->next;
i++;
}
if (tmp == NULL)
{
return (NULL);
}
return (tmp);
}
