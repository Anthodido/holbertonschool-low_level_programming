#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Libere une liste chainee de type list_t.
 * @head: Pointeur vers le premier noeud de la liste
 *
 * Return: Rien
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head != NULL)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
return;
}
