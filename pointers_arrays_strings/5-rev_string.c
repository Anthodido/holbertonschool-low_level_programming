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
int y;

while (s[f] != '\0')
f++;

for (l = 0; l < f / 2; l++)
{
y = s[l];
s[l] = s[f - l - 1];
s[f - l - 1] = y;
}
}
