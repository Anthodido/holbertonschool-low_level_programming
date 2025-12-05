#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Ajoute un nouveau noeud au debut d'une liste list_t.
 * @head: Pointeur vers le pointeur sur la tete de la liste
 * @str: Chaine de caracteres a dupliquer dans le nouveau noeud
 *
 * Return: L'adresse du nouveau noeud, ou NULL en cas d'echec
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
char *copie;
unsigned int slen;

if (head == NULL)
{
return (NULL);
}
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
copie = strdup(str);
if (copie == NULL)
{
free(new);
return (NULL);
}
for (slen = 0; copie[slen] != '\0'; slen++)

new->str = copie;
new->len = slen;
new->next = *head;
*head = new;

return (new);
}
