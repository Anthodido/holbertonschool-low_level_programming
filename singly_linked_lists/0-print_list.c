#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - Affiche tous les éléments d'une liste de type list_t.
 * @h: Pointeur constant vers le premier élément (tête) de la liste chaînée
 *
 * Return: Le nombre de nœuds présents dans la liste
 */
size_t print_list(const list_t *h)
{
size_t count = 0;


while (h != NULL)
    {
        if (h->str == NULL)
         printf("[0] (nil)\n");

        else
        printf("[%d] %s\n", h->len, h->str);
        count++;
        h = h->next;
   }
return (count);
}