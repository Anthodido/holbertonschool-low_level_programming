#ifndef LISTS_H
#define LISTS_H
/**
 * struct list_s - Liste chaînée simple
 * @str: Chaîne de caractères
 * @len: Longueur de la chaîne
 * @next: Pointeur vers le prochain nœud
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


int _putchar(char c); /**je déclare la fonction _putchar*/
size_t print_list(const list_t *h);



#endif