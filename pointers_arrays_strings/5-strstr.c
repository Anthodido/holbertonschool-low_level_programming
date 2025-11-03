#include "main.h"
#include <stddef.h>

/**
 * _strstr - trouve la première occurrence d’une sous-chaîne dans une autre
 * @haystack: chaîne principale à analyser
 * @needle: sous-chaîne à rechercher
 *
 * Return: pointeur vers le début de la sous-chaîne trouvée,
 * ou NULL si aucune correspondance n'est trouvée
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;

if (*needle == '\0')
return (haystack);

while (haystack[i] != '\0')
{

while (needle[j] != '\0' && haystack[i + j] == needle[j])
{
j++;
}

if (needle[j] == '\0')
return (&haystack[i]);

i++;
}

return (NULL);
}
