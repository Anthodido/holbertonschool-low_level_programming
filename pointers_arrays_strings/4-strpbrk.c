#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - cherche le premier caractère dans s qui est aussi dans accept
 * @s: chaîne à analyser
 * @accept: chaîne contenant les caractères à rechercher
 *
 * Return: pointeur vers le premier caractère trouvé dans s,
 * ou NULL si aucun caractère n'est trouvé
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int y;

while (s[i] != '\0')
{
y = 0;

while (accept[y] != '\0')
{
if (s[i] == accept[y])
return (&s[i]);
y++;
}
i++;
}

return (NULL);
}
