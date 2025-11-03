#include "main.h"
/**
 * _strchr - recherche la première occurrence d’un caractère
 * @s: chaîne de caractères à parcourir
 * @c: caractère à rechercher
 *
 * Return: un pointeur vers la première occurrence de c dans s,
 * ou NULL si le caractère n’est pas trouvé
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
return (&s[i]);

else
i++;
}
if (s[i] == c)
return (&s[i]);

return (0);
}
