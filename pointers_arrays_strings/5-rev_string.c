#include "main.h"
/**
 * rev_string - affiche une chaîne de caractères à l’envers
 * @s: pointeur vers la chaîne de caractères à afficher
 *
 * Description: Parcourt la chaîne jusqu’à la fin, puis affiche
 * chaque caractère dans l’ordre inverse à l’aide de _putchar.
 */
void rev_string(char *s)
{
int f = 0;
int l;

while (s[f] != '\0')
f++;

for (l = f - 1; l >= 0; l--)
_putchar (s[l]);

_putchar ('\n');
}
