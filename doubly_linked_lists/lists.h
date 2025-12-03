#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_s - Liste chaînée simple
 * @str: Chaîne de caractères
 * @len: Longueur de la chaîne
 * @next: Pointeur vers le prochain nœud
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif