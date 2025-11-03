#include "main.h"

/**
 * _strspn - calcule la longueur du préfixe d'une chaîne
 * composé uniquement de caractères présents dans une autre chaîne
 * @s: chaîne à analyser
 * @accept: chaîne contenant les caractères autorisés
 *
 * Return: le nombre d’octets initiaux de s
 * composés uniquement de caractères présents dans accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int h;
int count = 0;
int found;

while (s[i] != '\0')
{
found = 0;
h = 0;

while (accept[h] != '\0')
{
if (accept[h] == s[i])
{
found = 1;
break;
}
h++;
}

if (!found)
break;

count++;
i++;
}

return (count);
}
